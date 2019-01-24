#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
typedef struct Node{
    int id;//��¼ÿ���˵ı��
    int redbagNum;//��¼���ĺ���ĸ���
    int sum;//��¼���ĺ���Ľ��
}Node;
bool cmp(Node a,Node b){
    if(a.sum != b.sum)
        return a.sum > b.sum;
    if(a.redbagNum != b.redbagNum)
        return a.redbagNum > b.redbagNum;
    return a.id < b.id;
}
int main(){
    Node p[10010];
    memset(p,0,sizeof(p));
    int n,m,a,b;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        p[i].id = i;
        scanf("%d",&m);
        while(m--){
            scanf("%d%d",&a,&b);
            p[a].redbagNum++;
            p[a].sum += b;
            p[i].sum -= b;
        }
    }
    sort(p+1,p+n+1,cmp);
    for(int i = 1;i <= n;i++)
        printf("%d %.2lf\n",p[i].id,(p[i].sum * 1.0)/100);
    return 0;
}//�мǿ������������ע����ĿҪ�󰡰�������
