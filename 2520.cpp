////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-10 19:36:19
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2520
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1600KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>

using namespace std;
int main() {
	int t; while (cin >> t && t) {
		for (int i = 0; i < t; ++i) {
			int x; cin >> x;
			cout << (x * x) % 10000 << endl;
		}
	}
	return 0;
}