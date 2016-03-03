////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-25 15:57:23
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2553
////Problem Title: 
////Run result: Accept
////Run time:62MS
////Run memory:1692KB
//////////////////System Comment End//////////////////
//#define LOCAL

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;
#define	MAXN	11
// ʹ��ȫ�ֱ������ٺ�����������������
int C[MAXN], N, total;

void DFS(int deep) 
{
	if (deep == N)	total++;
	else for (int i = 0; i < N; ++i) {
		// ��װģ�����İѻʺ����(deep, i)���棬����Ƿ����Ҫ�󣬼�����ͻ
		C[deep] = i;
		//
		bool ok = true;
		for (int j = 0; j < deep; ++j) {
			if (C[deep] == C[j] || deep - j == C[deep] - C[j] || deep - j == C[j]
																	- C[deep])
			{
				ok = false;
				break;
			}
		}
		if (ok)	DFS(deep + 1);
	}
}

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	std::ios::sync_with_stdio(false);
	int ns[15];
	for (N = 1; N <= 10; ++N)
	{
		total = 0;
		DFS(0);
		ns[N] = total;
	}
	while (cin >> N && N) {
		
		cout << ns[N] << endl;
	}
	return 0;
} 
