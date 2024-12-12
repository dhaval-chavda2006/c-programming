// recurision of factorial

#include<stdio.h>
int fact(int n)
{
	int f=1;
	if(n==1)
	{
		return 1;
	}
	else
	{
		f =n*fact(n-1);
		return f;
	}
}
void main()
{
	int f,n;
	printf("ENTER THE VALUE OF N: ");
	scanf("%d",&n);
	
	f=fact(n);
	printf("FACTORIAL =%d",f);
}