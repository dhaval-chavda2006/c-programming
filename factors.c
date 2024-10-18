 // factors of given no.

#include<stdio.h>
void main(){
	
	int n,i;
	
	printf("ENTER NO: ");
	scanf("%d",&n);
	
	i=1;
while(i<=n){
	
	if(n%i==0){
		printf("\n%d",i);
	}
	i++;	
}
}


