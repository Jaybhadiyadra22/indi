#include<stdio.h>
main()
{
	int a,b;
	a=10;
	b=20;
	
	int *n1,*n2;
	n1=&a;
	n2=&b;
	
		int *temp;
		temp=*n1;
		*n1 = *n2;
		*n2 = temp;
		printf("swaping value A=%d\n",*n1);
		printf("swaping value B=%d\n",*n2);
		
	
}
