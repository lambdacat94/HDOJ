////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-03 22:43:57
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1215
////Problem Title: 
////Run result: Accept
////Run time:889MS
////Run memory:1692KB
//////////////////System Comment End//////////////////
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, sum = 0;
		cin >> a;
		b = (int)sqrt(a * 1.0);
		for (int i = 2; i <= b; ++i)
		{
			if (a % i == 0) {
				if (i * i != a)
					sum = sum + i + a / i;
				else
					sum += i;
			}
		}
		cout << sum + 1 << endl;
	}
	return 0;
}