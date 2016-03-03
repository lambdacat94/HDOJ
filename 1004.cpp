////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-03-10 22:51:24
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1004
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1668KB
//////////////////System Comment End//////////////////
//#define LOCAL
#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// use the map container to storage the string int a key value pair
	map<string, int> m;
	// here the iterator it and it2
	map<string, int>::iterator it, it2;
	int n, i;
	string s;
	while (cin >> n)
	{
		if (n == 0)	break;
		// clear the map each case
		m.clear();
		for (i = 0; i < n; ++i)
		{
			cin >> s;
			// find which s input, if there is exist, the key value pair ++
			if (m.find(s) != m.end())
				m[s] = m[s] + 1;
			// if there is no s in the map, create a new pair
			else
				m[s] = 1;
		}
		// use it2 to point to the biggest pair
		it2 = m.begin();
		for (it = m.begin(); it != m.end(); it++)
		{
			if (it2->second < it->second)
				it2 = it;
		}
		cout << it2->first << endl;
	}
	return 0;
}