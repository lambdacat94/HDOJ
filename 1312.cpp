////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-05 22:51:38
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1312
////Problem Title: 
////Run result: Accept
////Run time:31MS
////Run memory:1692KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <fstream>

using namespace std;

const int maxn = 20 +1;
char maze[maxn][maxn];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int sum;
int W, H, sx, sy;
void dfs(int x, int y) 
{
	maze[x][y] = '#';
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx && nx < H && 0 <= ny && ny < W &&
				maze[nx][ny] == '.') {
			dfs(nx, ny);
			sum++;
		}
	}
}

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	// Input OK
	while (cin >> W >> H && W && H) {
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < W; ++j) {
				cin >> maze[i][j];
				if (maze[i][j] == '@') {
					sx = i;	sy = j;
				}
			}
		}
		sum = 1;
		dfs(sx, sy);
		cout << sum << endl;
	}
	return 0;
}