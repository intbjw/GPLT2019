#include<bits/stdc++.h>
using namespace std;
int zhong[1000],qian[1000];
struct node{
	int data;
	struct node *left,*right;
};
struct node *creat(int q,int z,int n){     //创建树
	struct node *T;
	int i;
	if(n<=0){
		T=NULL;
	}
	else{
		T=(struct node *)malloc(sizeof(struct node));
		T->data=qian[q];
		for(i=0;zhong[i+z]!=qian[q];i++);
		T->left=creat(q+1,z,i);
		T->right=creat(q+i+1,z+i+1,n-i-1);
	}
	return T;
}
struct node *change(struct node *T){   //转换树
	struct node *t;
	if(T){
		if(T->left!=NULL || T->right!=NULL){
			t=T->left;
			T->left=T->right;
			T->right=t;
		}
		change(T->left);
		change(T->right);
	}
	return T;
}
void cengci(struct node *T,int n){  //层次输出树
	struct node *q[100],*p;
   int f=0,r=0,cnt=0;
   if(T){
   	   q[r++]=T;
   	   while(f!=r){
   	   	p=q[f++];
   	     printf("%d",p->data);
   	     cnt++;
   	     if(cnt!=n){
   	     	cout<<" ";
			}
		else
		cout<<endl;
		if(p->left!=NULL)
		   q[r++]=p->left;
		if(p->right!=NULL)
           q[r++]=p->right;
	  }
   }
}
int main(){
	struct node *T;
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>zhong[i];
	}
	for(i=0;i<n;i++){
		cin>>qian[i];
	}
	T=creat(0,0,n);
	T=change(T);
	cengci(T,n);
	return 0;
}
