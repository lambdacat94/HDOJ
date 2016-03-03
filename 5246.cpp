////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-06-26 18:40:51
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 5246
////Problem Title: 
////Run result: Accept
////Run time:436MS
////Run memory:1652KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

typedef long long LL;
const int maxn = 10005;
LL arr[maxn];
LL m, k;
int n;

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	int T, kase = 1;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%I64d%I64d", &n, &m, &k);
		for (int i = 0; i < n; ++i) 
			scanf("%I64d", &arr[i]);

		sort(arr, arr + n);
		LL now = m;
		int ok = 0;
		printf("Case #%d:\n", kase++);
		if (m < arr[0]) {
			cout << "madan!" << endl;
			continue;
		}
		for (int i = 0; i < n; ) {
			if (arr[i] <= now) ++i;
			else {
				now = arr[i - 1] + k;
				if (now < arr[i]) break;
				else ++i;
				k--;
			}
			if (i == n) {
				ok = 1; break;
			}
		}
		if (ok) cout << "why am I so diao?" << endl;
		else cout << "madan!" << endl;

	}
	return 0;
}