#include <iostream>
using namespace std;
struct jiu
{
  int a,b,c,d;
}h[100];
int main ()
{
  int ma,mb,n;
  cin>>ma>>mb>>n;
  for (int i=0;i<n;i++)
    cin>>h[i].a>>h[i].b>>h[i].c>>h[i].d;
  int la=0,lb=0;
  for (int i=0;i<n;i++)
  {
    if (h[i].a+h[i].c==h[i].b&&h[i].a+h[i].c!=h[i].d) la++; //如果甲输了而乙没输
    else if (h[i].a+h[i].c==h[i].d&&h[i].a+h[i].c!=h[i].b) lb++;  //如果甲输了而乙没输
    if (la>ma) {cout<<"A"<<endl<<lb<<endl;break;}  //喝的杯数大于最多能喝的杯数
    else if (lb>mb) {cout<<"B"<<endl<<la<<endl;break;}
  }
  return 0;
}
//先把数据都读入进去
