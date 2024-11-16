//to find even and odd in array list

#include<stdio.h>
void main(){
	int a[10],even=0,odd=0,i,n;
	
	printf("ENTER N= ");
	scanf("%d",&n);
	
for(i=0;i<n;i++){
	
	printf("\nENTER = a[%d]",i);
	scanf("a[%d]= ",&i);

	if(i%2==0){
		even++;
	}else{
		odd++;
	}
}
printf("\nTHE EVEN NO = %d",even);
printf("\nTHE ODD NO = %d",odd);	
	