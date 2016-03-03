////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 11:40:50
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1032
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1684KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	int a, b, t, max, sum, n;
	while (cin >> a >> b)
	{
		cout << a << ' ' << b << ' ';
		max = 0;
		// exchange value
		if (a > b) {
			t = a;
			a = b;
			b = t;
		}
		for (int i = a; i <= b; ++i) {
			n = i, sum = 1;
			while (n != 1) {
				if (n % 2) {
					n = 3 * n + 1;
				}
				else {
					n = n / 2;
				}
				sum++;
			}
			if (sum > max)	max = sum;
		}
		 cout << max << endl;
	}
	return 0;
}