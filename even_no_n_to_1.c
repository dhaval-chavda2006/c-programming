 // even no. from n to 1 while loop

#include<stdio.h>
void main(){
	
	int n,i;
	
	printf("ENTER NO: ");
	scanf("%d",&n);
	
	i=n;
do{
	if(i%2==0)
	printf("\n%d",i);
	i--;
}
while(i>=1);
}