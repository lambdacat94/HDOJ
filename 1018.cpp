////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-23 19:29:21
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1018
////Problem Title: 
////Run result: Accept
////Run time:296MS
////Run memory:1696KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		double sum = 0;
		cin >> x;
		for (int i = 2; i <= x; ++i)
		{
			sum += log10(i * 1.0);
		}
		cout << (int)sum + 1 << endl;
	}
	return 0;
}