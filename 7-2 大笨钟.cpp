#include<bits/stdc++.h>
using namespace std;
int main()
{
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	if((hh>=0&&hh<=11||hh==12&&mm==0))
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
    else{
        {
            for(int i=0;i<hh-12;i++)
                printf("Dang");
            if(mm!=0)
                printf("Dang");
            printf("\n");
        }
    }
	//printf("%d,%d",hh,mm);
	return 0;
}
