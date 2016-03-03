////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 18:52:36
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1097
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1712KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long a, b, n;
	while (cin >> a >> b) {
                a %= 10;
		b %= 4;
		if (b == 0)
			b = 4;
		n = pow(a, b);
		cout << n % 10 << endl;
	}

	return 0;
}