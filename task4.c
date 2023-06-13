#include<stdio.h>
main()
{
	char a[100];
	char *p;
	
	int i,n;
	printf("enter string =");
	gets(a);
	
	p=&a;
	
	printf("string length =%d",strlen(p));
	
	
}
