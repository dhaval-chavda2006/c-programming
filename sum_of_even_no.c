// print sum of even no. from 1 to n

#include<stdio.h>
void main(){
	
	int n,i,sum=0;
	
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
	i = 1;
while(i<=n){
	if(i%2==0)
	sum += i;
	i++;	
}
printf("\n%d",sum);
}
