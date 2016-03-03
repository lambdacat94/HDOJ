////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-09 13:25:33
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2005
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1676KB
//////////////////System Comment End//////////////////


#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int dayp[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dayr[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	int year, month, day;
	while (scanf("%d/%d/%d", &year, &month, &day) == 3) {
		int total = 0;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			for (int i = 1; i <= month; ++i) {
				total += dayr[i - 1];
			}
			total += day;
		} else {
			for (int i = 1; i <= month; ++i) {
				total += dayp[i - 1];
			}
			total += day;
		}
		cout << total << endl;
	}
	return 0;
}