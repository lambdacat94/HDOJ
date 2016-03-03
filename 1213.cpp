////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-08-21 21:39:22
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1213
////Problem Title: 
////Run result: Accept
////Run time:31MS
////Run memory:1676KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string.h>

using namespace std;
const int INF = 10000000000;
const int MAX_E = 10000;
const int MAX_N = 10000;
int par[MAX_N];
int ranks[MAX_N];
void init_union_find(int n) {
	for (int i = 0; i < n; ++i) {
		par[i] = i;
		ranks[i] = 0;
	}
}
int find(int x) {
	if (par[x] == x) {
		return x;
	}
	else {
		return par[x] = find(par[x]);
	}
}
void unite(int x, int y) {
	x = find(x), y = find(y);
	if (x == y) return;
	if (ranks[x] < ranks[y]) {
		par[x] = y;
	}
	else {
		par[y] = x;
		if (ranks[x] == ranks[y]) ranks[x]++;
	}
}
bool same(int x, int y) {
	return find(x) == find(y);
}
/*
struct edge { int u, v, cost; };
bool comp(const edge &e1, const edge &e2) {
	return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;

int Kruskal() {
	sort(es, es + E, comp);
	init_union_find(V);
	int res = 0;
	for (int i = 0; i < E; ++i) {
		edge e = es[i];
		if (!same(e.u, e.v)) {
			unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}
*/
int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	int T; cin >> T;
	while (T--) {
		memset(ranks, 0, sizeof(ranks));
		memset(par, 0, sizeof(par));
		
		int a, b; cin >> a >> b;
		init_union_find(a);
		for (int i = 0; i < b; ++i) {
			int first, second; 
			cin >> first >> second;
			unite(first, second);
		}
		int count = 0;
		for (int i = 0; i < a; ++i) {
			if (par[i] == i) count++;
		}
		cout << count << endl;
	}
	return 0;
}
