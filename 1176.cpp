////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-19 12:30:24
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1176
////Problem Title: 
////Run result: Accept
////Run time:343MS
////Run memory:7172KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>

using namespace std;

const int MAXT = 100010;

int dp[14][MAXT];
int n, t;

int max(int a, int b) {
	return a > b ? a : b;
}


void init() {
	int x, tt;
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n; ++i) {
		cin >> x >> tt;
		dp[x + 1][tt]++;
		t = max(t, tt);
	}
}

int dps() {
	for (int i = t - 1; i >= 0; --i) {
		for (int j = 1; j <= 11; ++j)
			dp[j][i] = max(dp[j][i + 1], max(dp[j + 1][i + 1], dp[j - 1][i + 1])) + dp[j][i];
	}
	return dp[6][0];
}

int main() {
//	freopen("input.txt", "r", stdin);
	while (cin >> n && n) {
		init();
		cout << dps() << endl;
	}
	return 0;
}