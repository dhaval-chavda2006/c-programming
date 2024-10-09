// first digit and last digit sum

#include<stdio.h>
void main(){
	int n,ld,fd,sum;
	
	printf("ENTER NO.= ");
	scanf("%d",&n);
	
	ld = n%10;
	printf("\nlast digit = %d",ld);
	
while(n>0){
	
	fd = n%10;
	n /= 10;
	
}
printf("\nFIRST DIGIT = %d",fd);
printf("\nLAST DIGIT = %d",ld);

sum = fd+ld;
printf("\nSUM OF FIRST AND LAST DIGIT = %d",sum);
}