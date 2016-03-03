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
// PPT上的标程


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// 迷宫地图
// X：墙壁，小狗不能进入
// S：小狗所处位置
// D：迷宫的门
// .：空格

char map[9][9];
int n, m, t, di, dj;	// (di, dj):门的位置
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

void dfs(int si, int sj, int cnt) // 表示在si，sj要求在cnt秒达到门的位置
// cnt 是当前的时间而非上述的注释
{
	int i, temp;
	if (si > n || sj > m || si <= 0 || sj <= 0) return;

	if (si == di && sj == dj && cnt == t) {
		escape = 1;
		return;
	}

	// 此处奇偶剪枝和路径剪枝
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

// 到此这个DFS函数已经颇有效率，如果在此main函数中不进行剪枝也是可以的

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	
	std::ios::sync_with_stdio(false);

	int i, j, si, sj;
	while (cin >> n >> m >> t && n && m && t) {
		// 此处数据是将要对对某些破烂数据的剪枝，可以删除掉
		int wall = 0;
		

		// Input
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				cin >> map[i][j];
				if (map[i][j] == 'S') { si = i; sj = j; }
				else if (map[i][j] == 'D') { di = i; dj = j; }
				// 对墙数量的剪枝
				else if (map[i][j] == 'X') wall++;
			}
		}

		if (n * m - wall <= t) {
			cout << "NO" << endl;
			continue;
		}

		escape = 0;


		// 上述剪枝完毕，估计也没多少数据会用到上面这个剪枝，对效率提升不大
		
		map[si][sj] = 'X';
		dfs(si, sj, 0);

		if (escape) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;

}