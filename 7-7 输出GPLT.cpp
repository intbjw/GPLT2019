#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int a[4]={0};
	cin>>str;
	for(int i=0;i<str.size();i++)
    {
        if(str[i]=='g'||str[i]=='G')
            a[0]++;
        if(str[i]=='P'||str[i]=='p')
            a[1]++;
        if(str[i]=='l'||str[i]=='L')
            a[2]++;
        if(str[i]=='T'||str[i]=='t')
            a[3]++;
    }
    while(1)
    {
        if(a[0]>0)
        {
            cout<<"G";
            a[0]--;
        }
        if(a[1]>0)
        {
            cout<<"P";
            a[1]--;
        }
        if(a[2]>0)
        {
            cout<<"L";
            a[2]--;
        }
        if(a[3]>0)
        {
            cout<<"T";
            a[3]--;
        }
        if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0)
            break;
    }
    cout<<endl;
	return 0;
}
