#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int a[1010],n,m;
int insert(int i){//插入节点
	int temp;
	while(a[i/2]>a[i] && i!=1){
		temp=a[i];
		a[i]=a[i/2];
		a[i/2]=temp;
		i=i/2;
	}
	return 0;
}
int find(int x){
	//找父亲节点
	int p,i;
	for(i=1;i<=n;i++)
	{
		if(a[i]==x)
		p=i;
	}
	return a[p/2];
}
int panduan(){
	string str,str1,str2;
	int x,y;
	char ch;
	cin>>x>>str;
	if(str=="and"){
		cin>>y>>str1>>str2;
		if(find(x)==find(y))
		cout<<"T"<<endl;
		else
		cout<<"F"<<endl;
		return 0;
	}
	cin>>str;
	if(str=="a"){
		cin>>str1>>str2>>y;
		if(find(x)==y)
		cout<<"T"<<endl;
		else
		cout<<"F"<<endl;
		return 0;
	}
	cin>>str;
	if(str=="root"){
		if(a[1]==x)
		cout<<"T"<<endl;
		else
		cout<<"F"<<endl;
		return 0;
	}
	cin>>str1>>y;
	if(find(y)==x)
	cout<<"T"<<endl;
	else
	cout<<"F"<<endl;
	return 0;
}
int main(){
	cin>>n>>m;
	int i,j;
	cin>>a[1];
	for(i=2;i<=n;i++){
		cin>>a[i];
		insert(i);
	}
	while(m--){
		panduan();//对字符串进行对错判断
	}
	return 0;
}
