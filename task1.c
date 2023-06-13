#include<stdio.h>
main()
{
	int a=10,b=20;
	int *p1,*p2,*temp;
	
	p1=&a;
	p2=&b;
	
	temp=p1;
	p1=p2;
	p2=temp;
	
	printf("a= %u = %d\n",p1,*p1);
	printf("b= %u = %d\n",p2,*p2);
	
}
