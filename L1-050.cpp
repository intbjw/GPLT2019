#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin >> l >> n;
    string str = "";
    for(int i=0;i<l;i++)
        str += "z";
    str[l-1]++;
    for(int i=str.size()-1;i>=0;i--)
    {
        int temp;
        temp = n%26;
        str[i] -= temp;
        n /= 26;
    }
    cout<<str;
    return 0;
}
