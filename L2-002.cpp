#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(void){
    int num,n,t;
    cin>>num>>n;
    int a[100005],b[100005],check[100005]={0},rs1[100005],rs2[100005];
    for(int i=0;i<n;i++){
        cin>>t;cin>>a[t]>>b[t];//a为数值，b为地址
    }
    int l1,l2;l1=l2=0;

    while(num!=-1){
        if(!check[abs(a[num])])check[abs(a[num])]=1,rs1[l1++]=num;//rs的两个数组用于存储地址
        else rs2[l2++]=num;
        num=b[num];
    }
    for(int i=0;i<l1-1;i++){
        num=rs1[i];//获取地址
        printf("%05d %d %05d\n",num,a[num],rs1[i+1]);//输出数值与地址，规范地址格式，下同
    }
    printf("%05d %d -1\n",rs1[l1-1],a[rs1[l1-1]]);
    if(l2){
        for(int i=0;i<l2-1;i++){
        num=rs2[i];
        printf("%05d %d %05d\n",num,a[num],rs2[i+1]);
    }
    printf("%05d %d -1\n",rs2[l2-1],a[rs2[l2-1]]);
    }
    return 0;
}
