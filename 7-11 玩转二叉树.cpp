#include <iostream>
#include <queue>
using namespace std;
/***************************************************************************************************************
    思路：
        1，利用分冶创建二叉树（又花了一点时间理解 L1,R1,L2,R2）
        2，利用 BFS 输出，因为题意是镜像，先将右孩子入队列，再将左孩子入队列即可
***************************************************************************************************************/

int inorder[35],outorder[35];
int lch[35],rch[35];

int build(int L1,int R1,int L2,int R2){
    if(L1 > R1) return 0;
    int root = outorder[L2];

    int p = L1;
    while(inorder[p] != root)   p++;
    int cnt = p-L1;

    lch[root] = build(L1,p-1,L2+1,L2+cnt);
    rch[root] = build(p+1,R1,L2+cnt+1,R2);

    return root;
}
void bfs(int root){
    queue<int> Q;
    int temp;
    int flag = 0;
    Q.push(root);
    while(!Q.empty()){
        temp = Q.front();
        Q.pop();

        if(flag)    cout<<" ";
        cout<<temp;
        flag = 1;

        if(rch[temp])   Q.push(rch[temp]);
        if(lch[temp])   Q.push(lch[temp]);
    }
    cout<<endl;
}
int main()
{
    int n;
    while(cin>>n){
        for(int i = 0;i < n;i ++)   cin>>inorder[i];
        for(int i = 0;i < n;i ++)   cin>>outorder[i];
        build(0,n-1,0,n-1);
        bfs(outorder[0]);
    }
    return 0;
}
