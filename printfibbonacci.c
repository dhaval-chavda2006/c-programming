// print fibbonacci series

#include<stdio.h>
void main(){
	
	int i,n,a=0,b=1;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
	i = 0;
while(i<=n){
	
	printf("\n%d",a);	
	b= a+b;
	a= b-a;
	i++;
}
}