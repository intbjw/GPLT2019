#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Person[100000]={0};
    int N,n,m,K,i,j,sum=0;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>m;
            if(n!=1)
            Person[m]+=n;
        }
    }
    cin>>K;
    for(i=1;i<=K;i++)
    {
        cin>>m;
        if(Person[m]==0)
        {
            if(sum!=0)
                cout<<" ";
            printf("%05d",m);
            //±ÜÃâ¶à´Î±»¼ì²â
            Person[m]=-1;
            sum++;
        }
    }
    if(sum==0)
        cout<<"No one is handsome";
    cout<<endl;
    return 0;
}
