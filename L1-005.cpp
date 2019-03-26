#include <bits/stdc++.h>
using namespace std;
struct stu{
    string id;
    int shi;
    int kao;
}t[1000];
int cmp(struct stu a,struct stu b)
{
    return a.shi < b.shi;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t[i].id>>t[i].shi>>t[i].kao;
        //std::cout << "/* message */" << '\n';
    }
    sort(t,t+n,cmp);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        cout<<t[temp-1].id<<" "<<t[temp-1].kao<<"\n";
    }
    return 0;
}
