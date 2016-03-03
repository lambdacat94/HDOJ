////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2013-05-11 17:34:24
////Compiler: Visual C
//////////////////////////////////////////////////////
////Problem ID: 1096
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:240KB
//////////////////System Comment End//////////////////
#include<stdio.h>
int main()
{
int i,n,m,s,t;
scanf("%d",&n);  
for(i=0;i<n;i++)  
{   
scanf("%d",&m);   
s=0;   
for(;m>0;m--)   
{    
scanf("%d",&t);    
s+=t;   
}   
printf("%d\n",s);   
if(i<n-1)
printf("\n");  
} 
}