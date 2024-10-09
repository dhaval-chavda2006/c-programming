//first and last digit product

#include<stdio.h>
void main(){
	
	int n,fd,ld,pro;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
	ld = n%10;
	
while(n>0){
	
	fd = n % 10;
	n /= 10;
}
printf("\nlast digit = %d",ld);
printf("\nfirst digit = %d",fd);

	pro = ld*fd;
	printf("\nproduct =%d",pro);
}