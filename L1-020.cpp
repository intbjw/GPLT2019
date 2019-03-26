#include<stdio.h>
#include<map>
using namespace std;
map<int,int> Map,M;
int main()
{
    int i,j,n,m,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&k);
            if(Map[k]==0)
            {
                Map[k]=m;
            }
            else
            {
                if(Map[k]<m)
                {
                    Map[k]=m;
                }
            }
        }
    }
    scanf("%d",&t);
    int flag=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        if(Map[k]<=1)
        {
            if(M[k]==0)
            {
                if(flag==0)
            {
                printf("%05d",k);
                flag=1;
            }
            else
            {
                printf(" %05d",k);
            }
            M[k]=1;
            }
        }
    }
    if(flag==0)
    {
        printf("No one is handsome");
    }
    return 0;
}
