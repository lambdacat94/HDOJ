////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-04-20 23:17:00
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1040
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1612KB
//////////////////System Comment End//////////////////
#include<stdio.h>
int main()
{
  int m,n,i,j,t,s[1000];
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d",&m);        
    for(i=0;i<m;i++)
      {
         scanf("%d",&s[i]);           
      }          
    for(i=0;i<m;i++)
     for(j=i;j<m;j++)
      {
        if(s[i]>s[j])
          {
           t=s[i];
           s[i]=s[j];
           s[j]=t;          
          }           
      }         
    for(i=0;i<m-1;i++)
      printf("%d ",s[i]);
    printf("%d\n",s[i]);        
  }
  return 0;
}