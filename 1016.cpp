////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-28 20:01:02
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1016
////Problem Title: 
////Run result: Accept
////Run time:1248MS
////Run memory:1692KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <string.h>
using namespace std;
int vis[21],A[21];  
//素数表,加快后续判断  
int primelist[38] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1};  

void dfs(int cur, int n)
{
	if(cur == n && primelist[A[0] + A[n-1]])
	{
		for(int i = 0; i < n-1; i++)
			cout << A[i] << " ";
		cout <<A[n-1] << endl;
	}
	else
		for(int i = 2; i <= n; i++)
		{
			if(!vis[i] && primelist[i+A[cur-1]])
			{
				A[cur] = i;
				vis[i] = 1;
				dfs(cur + 1, n);
				vis[i] = 0;
			}
		}
}
int main()
{
	int cnt = 1;
	int n;
	A[0] = 1;
	while(cin>>n)
	{
		memset(vis, 0, sizeof(vis));
		cout << "Case " << cnt++ << ":\n" ;
		dfs(1, n);
		cout << endl;
	}
	return 0;
}