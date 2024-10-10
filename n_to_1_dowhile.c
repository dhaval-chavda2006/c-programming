//print from n to 1 do while
	
#include<stdio.h>
void main(){
	int i,n;
	
	printf("ENTER VALUE OF N: ");
	scanf("%d",&n);
	
	
	i=n;
do{
	printf("\n%d",i);
	i--;}

while (i>=1);
}
