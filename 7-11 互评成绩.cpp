#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
 	int n,k,m;
 	int s[101];
 	int i,j=0,p,q;
 	double sum1;
 	double aver[10001];
 	cin>>n>>k>>m;
 	q=n;
    while(n--){
    	p=k;
    	sum1=0.0;
    	memset(s,0,sizeof(s));
    	for(i=0;i<k;i++){
    		cin>>s[i];
    		sum1=sum1+s[i];
		}
		int max=s[0];
		int min=s[0];
		for(i=1;i<k;i++){
          if(s[i]>max)
           max=s[i];
          if(s[i]<min)
           min=s[i];
		}
		sum1=sum1-max-min;
		aver[j++]=sum1/(p-2);
	}
	sort(aver,aver+q);
	for(i=q-m;i<j-1;i++)
     printf("%.3lf ",aver[i]);
     printf("%.3lf\n",aver[j-1]);
     return 0;
}
