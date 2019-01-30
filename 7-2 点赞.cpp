#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct Node{
    int cnt,num;
}Node[1001];

bool cmp(struct Node A,struct Node B) // 结构体中 sort函数的使用
{
    if(A.cnt!=B.cnt)
        return A.cnt>B.cnt;
    else return A.num>B.num;
}
int main()
{
    int n,k,a;
    cin>>n;
    while(n--)
    {
        cin>>k;
        while(k--)
        {
            cin>>a;
            Node[a].cnt++;
            Node[a].num=a;
        }
    }
    sort(Node+1,Node+1001,cmp);
    printf("%d %d\n",Node[1].num,Node[1].cnt);

    return 0;
}
