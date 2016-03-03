////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 22:36:57
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2161
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1692KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 16010;
bool notprime[MAXN];
void init()
{
	memset(notprime, false, sizeof(notprime));
	notprime[0] = notprime[1] = true;
	for (int i = 2; i < MAXN; i++) if (!notprime[i]) {
		if (i > MAXN / i)	continue;
		for (int j = i * i; j < MAXN; j += i)
			notprime[j] = true;
	}
}
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	init();
	notprime[2] = true;
	int x, n = 1;
	while (cin >> x && x > 0) {
		cout << n++ << ": ";
		// notprime[x] : true 不是素数，false 是素数
		// 这个模板中的2是素数
		if (notprime[x] == false)	cout << "yes" << endl;
		else	cout << "no" << endl;
	}
	return 0;
}
