#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=0;
	for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==1)
            a++;
        else
            b++;
    }
    cout<<a<<" "<<b<<endl;
	return 0;
}
