////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-03-14 20:53:15
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1001
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:312KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
using namespace std;
unsigned int cal(int n);
int main()
{
  int x;
  while(scanf("%d",&x)!=EOF)
  {
    cout<<cal(x)<<endl;
    cout<<endl;
  }
  return 0;
}
unsigned int cal(int n)
{
  if(n%2==0)
    return n/2*(n+1);
  else
    return (n+1)/2*n;
}