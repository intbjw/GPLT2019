#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,id;
    int a[1001]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>id;
            a[id]++;
        }
    }
    int maxx=0,maxi;;
    for(int i=0;i<1001;i++)
    {
        if(a[i]>=maxx)
            {
                maxi=i;
                maxx = a[i];
            }
        //cout<<i<<" "<<a[i]<<"\n";
    }
    cout<<maxi<<" "<<a[maxi];
    return 0;
}
