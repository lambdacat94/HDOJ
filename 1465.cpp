////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-03-12 09:02:48
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1465
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1688KB
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
	long long arr[25];
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 25; ++i)
	{
		arr[i] = (i - 1) * (arr[i - 1] + arr[i - 2]);
	}
	int n;
	while (cin >> n)
	{
		cout << arr[n] << endl;
	}
	return 0;
}