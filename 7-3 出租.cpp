#include<bits/stdc++.h>
using namespace std;
const int N=20;
char a[N];     //���ַ������洢�绰���룬��������ͳ��ÿһ����
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
		s.insert(a[i]);        //��ÿһ���ַ����ŵ�set������
	}
	set<char >::reverse_iterator it;
	for(it=s.rbegin();it!=s.rend();it++)
	{
		c[j++]=*it;           //��ȥ�غ���ַ��Ӵ�С�浽c������
	}
	c[j]='\0';
	for(k=0;k<n;k++)
	{
		for(i=0;i<j;i++)
		{
			if(a[k]==c[i])
			{
				b[t++]=i;     //ͳ�����ÿ���ַ���c�����е�λ��
			}
		}

	}
    cout<<"int[] arr = new int[]{";    //�����һ������
    for(i=0;i<j;i++)
    {
    	if(i)
    	{
    		cout<<",";
		}
		cout<<c[i];
	}
	cout<<"};"<<endl;
	cout<<"int[] index = new int[]{";   //����ڶ�������
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
