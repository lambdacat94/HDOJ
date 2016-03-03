////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-03-12 08:46:02
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2013
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1676KB
//////////////////System Comment End//////////////////
//#define LOCAL
#include <iostream>

#include <fstream>

using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	while (cin >> n)
	{
		int sum = 1;
		for (int i = 1; i < n; i++)
		{
			sum = (sum + 1) * 2;
		}
		cout << sum << endl;
	}
	return 0;
}