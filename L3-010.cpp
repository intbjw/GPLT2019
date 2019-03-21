#include<bits/stdc++.h>
using namespace std;
int tree[50]={0};
void add(int k,int val)
{
    if(tree[k]==0)
        tree[k]=val;
    else
    {
        if(val>tree[k])
            add((k<<1)+1,val);
        else
            add((k<<1)+2,val);
    }
}
int main()
{
	int n;
	cin>>n;
	cin>>tree[0];
    for(int i=1;i<n;i++)
    {
        int temp;
        cin>>temp;
        add(0,temp);
    }
    int cnt=0,flag=1;
    for(int i=0;i<50;i++)
    {
        if(tree[i]!=0)
            {
                if(cnt)
                    cout<<" ";
                cout<<tree[i];
                cnt++;

            }
        else
            flag = 0;
        if(cnt==n)
            break;
    }
    cout<<endl;
    if(!flag)
        cout<<"NO";
    else
        cout<<"YES";
	return 0;
}
