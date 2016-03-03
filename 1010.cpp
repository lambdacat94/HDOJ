////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-26 11:04:06
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1010
////Problem Title: 
////Run result: Accept
////Run time:62MS
////Run memory:1676KB
//////////////////System Comment End//////////////////
// PPT�ϵı��


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// �Թ���ͼ
// X��ǽ�ڣ�С�����ܽ���
// S��С������λ��
// D���Թ�����
// .���ո�

char map[9][9];
int n, m, t, di, dj;	// (di, dj):�ŵ�λ��
bool escape;

int dir[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

/*
	1 1 1 1 1 1 1 1 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 0 0 0 0 0 0 0 1
	1 1 1 1 1 1 1 1 1

*/

void dfs(int si, int sj, int cnt) // ��ʾ��si��sjҪ����cnt��ﵽ�ŵ�λ��
// cnt �ǵ�ǰ��ʱ�����������ע��
{
	int i, temp;
	if (si > n || sj > m || si <= 0 || sj <= 0) return;

	if (si == di && sj == dj && cnt == t) {
		escape = 1;
		return;
	}

	// �˴���ż��֦��·����֦
	temp = (t - cnt) - abs(si - di) - abs(sj - dj);
	if (temp < 0 || temp & 1) return;

	for (i = 0; i < 4; i++) {
		if (map[si + dir[i][0]][sj + dir[i][1]] != 'X') {
			map[si + dir[i][0]][sj + dir[i][1]] = 'X';
			dfs(si + dir[i][0], sj + dir[i][1], cnt + 1);
			if (escape) return;
			// backtrack
			map[si + dir[i][0]][sj + dir[i][1]] = '.';
		}
	}
	return;
}

// �������DFS�����Ѿ�����Ч�ʣ�����ڴ�main�����в����м�֦Ҳ�ǿ��Ե�

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	
	std::ios::sync_with_stdio(false);

	int i, j, si, sj;
	while (cin >> n >> m >> t && n && m && t) {
		// �˴������ǽ�Ҫ�Զ�ĳЩ�������ݵļ�֦������ɾ����
		int wall = 0;
		

		// Input
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				cin >> map[i][j];
				if (map[i][j] == 'S') { si = i; sj = j; }
				else if (map[i][j] == 'D') { di = i; dj = j; }
				// ��ǽ�����ļ�֦
				else if (map[i][j] == 'X') wall++;
			}
		}

		if (n * m - wall <= t) {
			cout << "NO" << endl;
			continue;
		}

		escape = 0;


		// ������֦��ϣ�����Ҳû�������ݻ��õ����������֦����Ч����������
		
		map[si][sj] = 'X';
		dfs(si, sj, 0);

		if (escape) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;

}