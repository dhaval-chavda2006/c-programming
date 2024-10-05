// print factorial

#include<stdio.h>
void main(){
	
	int i,n,f;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
	i = 1;
while(i<=n){
	
	f *= i;
	printf("\n%d",f);	
	i++;
}
}