////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 21:28:58
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2001
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1688KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	std::ios::sync_with_stdio(false);
	cout.setf(ios::fixed);
	double x1, y1, x2, y2;

	while (cin >> x1 >> y1 >> x2 >> y2) {
		cout << setprecision(2) << sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)) << endl;
	}
	return 0;
}
