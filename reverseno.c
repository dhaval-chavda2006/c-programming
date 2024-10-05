// print reverse no.

#include<stdio.h>
void main(){
	
	int num,r,sum;
	printf("ENTER NO.: ");
	scanf("%d",&num);
	
while(num>0){
	
	r = num%10;
	sum = (sum*10)+r;
	num =num/10;
	
}
	printf("\n%d",sum);
}