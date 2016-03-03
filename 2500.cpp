////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-11 09:44:19
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2500
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1668KB
//////////////////System Comment End//////////////////
#include <iostream>
using namespace std;
void print(int x)
{
	for(int k = 0; k < 3 * x; ++k) {
		for (int j = 0; j < x; ++j)
			cout << "HDU";
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	while (n --)
	{
		int num;
		cin >> num;
		print(num);
	}
	return 0;
}