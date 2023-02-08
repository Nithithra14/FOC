#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any number:");
	scanf("%d",&n);
	printf("even number between 1 to %d:\n",n);
	for (i=1;i<=n;i++)
	{
		if (i%2==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
