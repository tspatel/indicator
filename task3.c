#include<stdio.h>
main()
{
	int a(n),i,n,*p;
	
	printf("enter number\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
    *p=&a[n-1];
    for(i=0;i<n;i++)
    {
    	printf("%d",*p--);
	}

}
