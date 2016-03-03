////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-05-19 13:36:09
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 5224
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1680KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
int n;
int work(int n)
{
    int ans=(1+n)*2;
    for(int i=1;i*i<=n;++i)
        if(n%i==0)
            ans=min(ans,(i+n/i)*2);
    return ans;
}
int main()
{
    int T;
    for(cin>>T;T;--T)
    {
        cin>>n;
        cout<<work(n)<<endl;
    }
    return 0;
}