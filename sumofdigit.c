// print sum of individual digit

#include<stdio.h>
void main(){
	
	int num,sum=0;
	printf("ENTER NO.: ");
	scanf("%d",&num);
	
while(num>0){
	
	sum += num % 10;
	num =num/10;
	
}
	printf("\n%d",sum);
}
