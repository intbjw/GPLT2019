#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int h,m;
        cin>>s>>h>>m;
        if(h>20||h<15||m>70||m<50)
            cout<<s<<"\n";
    }

    return 0;

}
