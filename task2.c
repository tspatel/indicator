#include<stdio.h>
main()
{
	int a[100];
	int i,n;	
	int *p[100];
    printf("Enter Array Size = ");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		p[i] = &a[i];
		printf("a[%d] = %d\n",i,*p[i]);
		
	}
	
}
