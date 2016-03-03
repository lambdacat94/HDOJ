////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-08-21 22:29:20
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1863
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1688KB
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

struct edge { int u, v, cost; };
bool comp(const edge &e1, const edge &e2) {
	return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;
int edges = 0;

int Kruskal() {
	sort(es, es + E, comp);
	init_union_find(V);
	int res = 0;
	for (int i = 0; i < E; ++i) {
		edge e = es[i];
		if (!same(e.u, e.v)) {
			unite(e.u, e.v);
			res += e.cost;
			edges++;
		}
	}
	return res;
}


int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	// N 道路条数，M村庄个数
	 
	while (cin >> E >> V && E) {
		memset(par, 0, sizeof(par));
		memset(ranks, 0, sizeof(ranks));
		edges = 0;
		int a, b, cost;
		for (int i = 0; i < E; ++i) {
			cin >> a >> b >> cost;
			es[i].u = a; es[i].v = b;
			es[i].cost = cost;
//			cout << "vilage " << a << " and " << b << " costs " << cost << endl;
		}
		int ans = Kruskal();
//		cout << "There is " << edges << " ways here" << " and costs " << ans << endl;
		if (edges == V - 1)
			cout << ans << endl;
		else
			cout << "?" << endl;
	}
	return 0;
}
