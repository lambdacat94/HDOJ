////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2015-03-12 10:25:38
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1008
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1676KB
//////////////////System Comment End//////////////////
#include<iostream>
using namespace std;
int main()
{

int n;
while(cin >> n && n != 0)
{
  int cur = 0, floor, total = 0;
  int fs = n;
  while(n--) {
    cin >> floor;
    if(cur < floor) {
      total += (floor - cur) * 6;
    } else if(cur >= floor) {
      total += (cur - floor) * 4;
    }
    cur = floor;
  }
  total += fs * 5;
  cout << total << endl;
}
return 0;
}