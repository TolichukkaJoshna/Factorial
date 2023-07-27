#include<stdio.h>
main()
{
	long int i=1,n,f;
	printf("enter a number..:");
	scanf("%ld",&n);
	printf("\n----------------------------");
	printf("\nNUMBER\tFACTORIAL");
	printf("\n----------------------------");
	while(i<=n)
	{
		f=f*i;
		printf("\n%ld\t%ld",i,f);
		i++;
	}
	printf("\n-----------------------------");
}
