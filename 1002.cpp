////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-02-11 22:50:13
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1002
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:300KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5001],b[5001];
    int aa[5001],bb[5001],k,n=0;
    scanf("%d",&k);
    for (int c=1;c<=k;c++)
    {
        scanf("%s%s",a,b);
        int alen=strlen(a);
        int blen=strlen(b);
        memset(aa,0,sizeof(aa));    //清除aa里的数值，让其为0
        memset(bb,0,sizeof(bb));
        int maxlen=blen;
        if(alen>blen) maxlen=alen;
        for(int i=alen-1;i>=0;i--)
            aa[alen-i]=a[i]-'0';
        for(int i=blen-1;i>=0;i--)
            bb[blen-i]=b[i]-'0';
        for(int i=1;i<=maxlen;i++)
        {
            aa[i]+=bb[i];
            if(aa[i]>9)
            {
                if(i==maxlen) maxlen++;
                aa[i+1]++;
                aa[i]-=10;
            }
        }
        printf("Case %d:\n",++n);
        printf("%s + %s = ",a,b);
        for(int i=maxlen;i>=1;i--)
            printf("%d",aa[i]);
        if (k==c)
            printf("\n");
        else
            printf("\n\n");
    }
    return 0;
}