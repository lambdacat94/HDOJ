////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-09 14:05:25
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2018
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1596KB
//////////////////System Comment End//////////////////

#include <iostream>
using namespace std;


int a[60];
int main()
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	
	for (int i = 3; i < 60; ++i) {
		a[i] = a[i - 1] + a[i - 3];
	}
	int n;
	while (cin >> n && n) {
		cout << a[n - 1] << endl;
	}
}