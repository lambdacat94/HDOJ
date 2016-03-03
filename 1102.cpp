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
/* ݔ�딵�� */
// ��ʾ���c֮�g߅�ę�ֵ
int cost[MAX_V][MAX_V];
// �ļ��� X ���l��߅��ÿ����c����С��ֵ
int mincost[MAX_V];
// ��c�Ƿ�����ڼ���֮��
bool used[MAX_V];
// ��c֮��Ŀ
int V;

int Prim() {
	// ��ʼ���й��c���� X �� ���� used[i] = false
	// �ļ��� X ���l��߅�������c����С��ֵ ���� mincost[i] = INF
	for (int i = 0; i < V; ++i) {
		mincost[i] = INF;
		used[i] = false;
	}
	// �xȡ 0 �c�� X ���ϵĵ�һ�����c
	mincost[0] = 0;
	int res = 0;

	while (true) {
		int v = -1;
		// �Ĳ���� X ����c���xȡ�� X �����ֵ��С����c
		for (int u = 0; u < V; ++u) {
			// u ����� X ���� !used[u]��
			if (!used[u] && (mincost[u] < mincost[v] || v == -1)) v = u;
		}

		if (v == -1) break;
		// �����c���뼯�� X
		used[v] = true;
		// �����ɘ��ֵ res �ۼ�
		res += mincost[v];
		// �����c X ����朽ӵ���С߅��ֵ
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
