 // even no. from 1 to n do while loop

#include<stdio.h>
void main(){
	
	int n,i;
	
	printf("ENTER NO: ");
	scanf("%d",&n);
	
	i=1;
do{
	if(i%2==0)
	printf("\n%d",i);
	i++;
}
while(i<=n);
}