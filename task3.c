#include<stdio.h>
main()
{
	int arr[100];
	int i,n,temp;
	
	printf("enter value:-");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("arr[%d] =",i);
		scanf("%d",(arr+i));
	}

	for(i=0;i<n;i++)
	{
		printf("%d\n",*(arr+i));
	}
	for(i=0;i<n;i++)
	{
		temp=*(arr+i);
		*(arr+i)=*(arr+n-1-i);
		*(arr+n-1-i)=temp;
	}
	printf("reversed array :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(arr+i));
	}
}