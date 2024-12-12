//call by reference

#include<stdio.h>
int swap(int *a, int *b);
void main()
{
	int a,b;
	
	printf("\nENTER a = ");
	scanf("%d",&a);
	
	printf("\nENTER b = ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\nVALUE OF a =%d and VALUE OF b =%d in main function",a,b);
}
swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*a = c;
	
	printf("\nAFTER SWAPING a = %d and b = %d",a,b);	
	
}