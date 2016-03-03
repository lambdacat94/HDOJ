////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-10 22:07:54
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1701
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1680KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	int n;
	double p, q;
	cin >> n;
	while (n--)
	{
		int i = 0;
		cin >> p >> q;
		while (true)
		{
			if ((int)(p * (++i) / 100 ) < (int)(q * i / 100))
				break;
		}
		cout << i << endl;
	}
	return 0;
}