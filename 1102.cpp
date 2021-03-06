////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-08-20 21:39:53
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1102
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:1640KB
//////////////////System Comment End//////////////////
//#define LOCAL

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
const int INF = 10000000000;

const int MAX_V = 100;
/* 輸入數據 */
// 表示兩點之間邊的權值
int cost[MAX_V][MAX_V];
// 從集合 X 出發的邊到每個頂點的最小權值
int mincost[MAX_V];
// 頂點是否包含在集合之中
bool used[MAX_V];
// 頂點之數目
int V;

int Prim() {
	// 初始所有節點不在 X 中 —— used[i] = false
	// 從集合 X 出發的邊到其他點的最小權值 —— mincost[i] = INF
	for (int i = 0; i < V; ++i) {
		mincost[i] = INF;
		used[i] = false;
	}
	// 選取 0 點爲 X 集合的第一個節點
	mincost[0] = 0;
	int res = 0;

	while (true) {
		int v = -1;
		// 從不屬於 X 的頂點中選取從 X 到其權值最小的頂點
		for (int u = 0; u < V; ++u) {
			// u 不屬於 X —— !used[u]。
			if (!used[u] && (mincost[u] < mincost[v] || v == -1)) v = u;
		}

		if (v == -1) break;
		// 將此點加入集合 X
		used[v] = true;
		// 總生成樹權值 res 累加
		res += mincost[v];
		// 更新與 X 集合鏈接的最小邊權值
		for (int u = 0; u < V; ++u) {
			mincost[u] = min(mincost[u], cost[v][u]);
		}
	}
	return res;
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	while (cin >> V) {
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				cin >> cost[i][j];
			}
		}
		int K; cin >> K;
		for (int i = 0; i < K; ++i) {
			int a, b; cin >> a >> b;
			//		cout << "a : b is " << a << " and " << b << endl;
			cost[a - 1][b - 1] = cost[b - 1][a - 1] = 0;
		}
		cout << Prim() << endl;
	}
	return 0;
}
