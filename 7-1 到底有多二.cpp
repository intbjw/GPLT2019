#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int flag1=0,flag2=0,sum=0;
    cin>>str;
    int len=str.size();
    if((str[len-1]-'0')%2==0)
        flag2=1;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='-')
            flag1=1;
        if(str[i]=='2')
            sum++;
    }
    if(flag1&&flag2)
        printf("%.2f%c",1.5*2*sum/(str.size()-1)*100,'%');
    else if(!flag1&&flag2)
        printf("%.2f%c",2.0*sum/str.size()*100,'%');
    else if(!flag1&&!flag2)
        printf("%.2f%c",1.0*sum/str.size()*100,'%');
    else if(flag1&&!flag2)
        printf("%.2f%c",1.5*sum/(str.size()-1)*100,'%');
    return 0;
}
