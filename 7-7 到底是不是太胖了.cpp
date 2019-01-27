#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	int N;
	int z;
	int l,h1;
	scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
    	scanf("%d %d",&h,&w);
    	z=(h-100)*2*9*1000/10;
    	l=z*9/10;
    	h1=z*11/10;
    	w=w*1000;
    	if(w>l&&w<h1)
    	printf("You are wan mei!\n");
    	if(w<=l)
    	printf("You are tai shou le!\n");
    	if(w>=h1)
    	printf("You are tai pang le!\n");
	}

}
