////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 08:03:22
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1045
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1688KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>

#define MAX_N 4

bool judge(int x, int y);
void DFS(int pos, int cnt);
int	input[MAX_N][MAX_N];
//int visited[MAX_N][MAX_N];
int	 n, maxn;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
using namespace std;
bool ok(int x, int y)
{
//	cout << "n: " << n << endl;
	return x >= 0 && x < n && y >= 0 && y < n;
}
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	char	in;
	
	while (cin >> n && n != 0)
	{
		maxn = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> in;
				if (in == '.')
					input[i][j] = 0;
				else
					input[i][j] = 1;
			}
		}
		DFS(0, 0);
		cout << maxn << endl;
	}
	return 0;
}

// ����0 Ϊ�ֵ���1Ϊǽ�ڣ�2Ϊ�ﱤ
// �ж��Ƿ���������λ��(x, y)��װ��һ���ﱤ
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0

bool judge(int x, int y)
{
	if (input[x][y] != 0)	return false;
	int dx, dy;
	dx = x;
	while (++dx < n && input[dx][y] == 0);
		if (ok(dx, y) && input[dx][y] == 2)	return false;
	dx = x;
	while (--dx >= 0 && input[dx][y] == 0);
		if (ok(dx, y) && input[dx][y] == 2)	return false;
	dy = y;
	while (++dy < n && input[x][dy] == 0);
		if (ok(x, dy) && input[x][dy] == 2)	return false;
	dy = y;
	while (--dy >= 0 && input[x][dy] == 0); 
		if (ok(x, dy) && input[x][dy] == 2)	return false;
	return true;
}
// �������ԣ����(x, y)���Է�����δ���ʹ��������֮��cnt++��Ȼ����(x, y)�������ĸ�
// �����ϵ���������������ĸ����겢����visited��־λ�ϱ�־�Ѿ����ʹ��ˣ�������ܷ�
// �ã��򲻽���ع�
void DFS(int pos, int cnt)
{
	if (pos == n * n) {
		if (cnt > maxn) {	
			maxn = cnt;
			return;
		}
	} else {
		int tx = pos / n;
		int ty = pos % n;
		if (judge(tx, ty)/* && !visited[tx][ty]*/)
		{
			input[tx][ty] = 2;
	//		visited[tx][ty] = 1;
	//		cout << tx << ' ' << ty << endl;
			DFS(pos + 1, cnt + 1);
			input[tx][ty] = 0;
	//		visited[tx][ty] = 0;
	//		return;
		}
		DFS(pos + 1, cnt);
	}
}