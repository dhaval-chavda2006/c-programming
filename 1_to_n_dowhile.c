// print from 1 to n do-while loop

#include<stdio.h>
void main(){
	int i=1,n;
	
	printf("ENTER VALUE OF N: ");
	scanf("%d",&n);
	
do{
		printf("\n%d",i);
		i++;	
}
while (i<=n);
}