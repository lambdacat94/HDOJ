////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-24 19:38:50
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1013
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1668KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int sum;
	char input[1000 + 5];
	cin >> input;
	while (input[0] != '0') {
		sum = 0;
		for (int i = 0; i < strlen(input); ++i){
			sum += input[i] - '0';
		}
		// 接下来继续模拟也可以，因为sum的规模相当小，但在此使用公式
		cout << (sum - 1) % 9 + 1 << endl;
		cin >> input;
	}
	return 0;
}