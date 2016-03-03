////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-26 17:51:49
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2734
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1588KB
//////////////////System Comment End//////////////////


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	string str;
	while (getline(cin, str) && str.compare("#") != 0) {
		int sum = 0;
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				sum += (str[i] - 'A' + 1) * (i + 1);
			}
		}
		cout << sum << endl;
	}
	return 0;
}