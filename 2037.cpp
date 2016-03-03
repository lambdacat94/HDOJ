////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-09 13:55:33
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2037
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1600KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <cstdio>
#include <queue>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

//typedef pair<int, int> P;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	int n;
	pair<int, int> p;
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;
	int a, b;
	while (cin >> n && n) {
		for (int i = 0; i < n; ++i) {
			cin >> a >> b;
			p = make_pair(b, a);
			que.push(p);
		}
		int total = 0, st =0;
		while (!que.empty()) {
			pair<int, int> q = que.top();	que.pop();
//			cout << q.first << "  :  " << q.second << endl;
			if (q.second >= st) {
				total++;	st = q.first;
			}
		}
		cout << total << endl;
	}
	return 0;
}