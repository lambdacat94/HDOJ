////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-12 23:47:37
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1214
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1688KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	int n;
	while (cin >> n)
	{
		cout << (n / 2) * (n / 2 - 1) / 2 + (n - n / 2) * (n - n / 2 - 1) / 2 << endl;
	}
	return 0;
}