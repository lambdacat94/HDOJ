////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-19 20:35:35
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2084
////Problem Title: 
////Run result: Accept
////Run time:218MS
////Run memory:1772KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>

using namespace std;

#define maxn 105

int C, N, i, j;
int dp[maxn][maxn], a[maxn][maxn];

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	cin >> C;
	while (C--) {
		cin >> N;

		memset(dp, 0, sizeof(dp));

		// Inputs
		for (i = 0; i < N; ++i) {
			for (j = 0; j <= i; ++j) {
				cin >> a[i][j];
			}
		}
		
		for (i = N - 1; i >= 0; --i) {
			for (j = 0; j <= i; ++j) {
				dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
			}
		}
		cout << dp[0][0] << endl;
	}
	return 0;
}