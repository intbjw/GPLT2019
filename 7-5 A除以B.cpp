#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	float temp;
	temp = 1.0*a/b;
	if(b<0)
        printf("%d/(%d)=%.2f",a,b,temp);
    else if(b==0)
        printf("%d/%d=Error",a,b);
    else
        printf("%d/%d=%.2f",a,b,temp);
	return 0;
}
