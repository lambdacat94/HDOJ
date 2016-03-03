////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-09 22:51:11
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1703
////Problem Title: 
////Run result: Accept
////Run time:31MS
////Run memory:1692KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int N;
	cin >> N;
	while (N != 0)
	{
		if (N == 1)
			cout << 0 << endl;
		else if (N == 2)
			cout << 5 << endl;
		else if (N == 3)
			cout << 15 << endl;
		else
			cout << (N * 2 - 4) * 5 << endl;
		cin >> N;
	}
	return 0;
}
