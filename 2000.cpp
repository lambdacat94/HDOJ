////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 23:19:58
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2000
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1660KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	char asc[100];
	while (cin >> asc) {
		sort(asc, asc + 3);
		cout << asc[0];
		for (int i = 1; i < 3; ++i)
			cout << ' ' << asc[i];
		cout << endl;
	}
	return 0;
}
