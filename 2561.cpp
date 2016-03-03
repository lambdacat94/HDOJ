////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 22:08:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2561
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1684KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	int arr[10], n;
	cin >> n;
	while (n--) {
		int ncase;
		cin >> ncase;
		for (int i = 0; i < ncase; ++i)
			cin >> arr[i];
		sort(arr, arr + ncase);
		cout << arr[1] << endl;
	}
}