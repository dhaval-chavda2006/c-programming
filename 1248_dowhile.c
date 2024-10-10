 //1,2,4,8,16,32 do while loop
 
#include<stdio.h>
void main(){
	
	int n,i;
	
	printf("ENTER NO: ");
	scanf("%d",&n);
	
	i=1;
do{
	printf("%d",i);
	i *= 2;
	
}
while(i<=n);
}