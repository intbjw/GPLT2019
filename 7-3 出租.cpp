#include<bits/stdc++.h>
using namespace std;
const int N=20;
char a[N];     //用字符串来存储电话号码，这样容易统计每一个数
char c[N];
int b[N];
int main()
{
	int i=0,j=0,n,k,t=0;
	set<char> s;
	cin>>a;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		s.insert(a[i]);        //把每一个字符都放到set集合中
	}
	set<char >::reverse_iterator it;
	for(it=s.rbegin();it!=s.rend();it++)
	{
		c[j++]=*it;           //把去重后的字符从大到小存到c数组中
	}
	c[j]='\0';
	for(k=0;k<n;k++)
	{
		for(i=0;i<j;i++)
		{
			if(a[k]==c[i])
			{
				b[t++]=i;     //统计最初每个字符在c数组中的位置
			}
		}

	}
    cout<<"int[] arr = new int[]{";    //输出第一个数组
    for(i=0;i<j;i++)
    {
    	if(i)
    	{
    		cout<<",";
		}
		cout<<c[i];
	}
	cout<<"};"<<endl;
	cout<<"int[] index = new int[]{";   //输出第二个数组
	for(i=0;i<t;i++)
	{
		if(i)
    	{
    		cout<<",";
		}
		cout<<b[i];
	 }
	 cout<<"};"<<endl;
	return 0;
}
