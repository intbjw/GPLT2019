#include<stdio.h>
#include<string.h>
#include<math.h>
int isPrime(int n) {
	int i, limit, flag = 1;
	if(n <= 1)
		flag = 0;
	else if(n == 2)
		flag = 1;
	else if(n % 2 == 0)
		flag = 0;
	else {
		limit = sqrt(n) + 1;
		for(i = 3; i <= limit; i += 2) {
			if(n % i == 0) {
				flag = 0;
				break;
			}
		}
	}
	return flag;
}
int main()
{
	int a[10000];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(isPrime(a[i]))
		{
			printf("Yes\n");
		 }
		 else
		 {
		 	printf("No\n");
		 }
	}
 }
