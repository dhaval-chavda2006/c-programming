// print factorial for loop

#include<stdio.h>
void main(){
	
	int i,n,f;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
for(i=1;i<=n;i++){
	
	f *= i;	
}
printf("\n%d",f);
}