////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-09 16:50:32
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2564
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1676KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	string input; int n;
	while (cin >> n && n) {
		getchar();
		for (int i = 0; i < n; ++i) {
			getline(cin, input);
			stringstream ss(input);
			string tmp;
			while (ss >> tmp) {
				cout << (char)toupper(tmp[0]);
			}
			cout << endl;
		}
	}
	return 0;
}