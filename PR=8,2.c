#include<stdio.h>

main()
{
	int a [50]={1,2,3,4,5,6};
	int *p1;
	
	p1 = &a;
	
	int i;
	for(i=0;i<=5;i++)
	{
		printf("%u => %d\n",p1+i,*(p1+i));
	}
}
