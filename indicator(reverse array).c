#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p;
	p=&a;
	printf("enter the array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("elements in array=");
	for(i=0;i<n;i++)
	{
		printf("%d",*p+i);

	}
	
	printf("\nReverse Array=");
	int *rev;
	rev=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d",*rev--);
	}
}

