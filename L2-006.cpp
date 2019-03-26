#include<cstdio>
#include<cstring>
#include<iostream>
#define MAXN 10000
using namespace std;
int s1[MAXN], s2[MAXN], s3[MAXN];
int n;
void f(int p1, int p2, int q1, int q2, int index)
{
	if(p1>p2 || q1>q2) return ;
	
	int i = p1 ;
	while(s1[i] != s2[q2]) i++;
	s3[index] = s1[i];
	//left
	f(p1, i-1, q1, q1+i-1-p1, 2*index+1);
	//right
 	f(i+1, p2, q1+i-p1, q2-1, 2*index+2);
	
}
 
int main()
{
	cin>>n;
	for(int i=0; i<n; i++) cin>>s2[i];
	for(int i=0; i<n; i++) cin>>s1[i];
	memset(s3,0,sizeof(s3));
	f(0, n-1, 0, n-1, 0);
	int cnt = 0; 
	for(int i=0; i<=100000; i++) {
		if(cnt==n)break;
		if(s3[i]){
			cnt++;
			if(i)cout<<" ";
			cout<<s3[i];
		}
	}
	return 0;
}