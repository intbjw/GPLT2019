#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    n=(n+2)%7;
    if(n==0)
        n=7;
	cout<<n<<endl;
	return 0;
}
