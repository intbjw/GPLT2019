#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==1||n==0)
        return 1;
    return f(n-1) * n;
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=f(i);
    }
    std::cout << sum << '\n';
    return 0;
}
