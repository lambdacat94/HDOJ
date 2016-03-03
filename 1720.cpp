////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 22:56:26
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1720
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1616KB
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
	int a, b;
	while (scanf("%x %x", &a, &b) != EOF)
		printf("%d\n", a + b);
	return 0;
}
