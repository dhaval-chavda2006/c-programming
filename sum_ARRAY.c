//sum of the no. in array

#include<stdio.h>
void main(){
	 int a[5],i,n,sum=0;

	 printf("ENTER ELEMENTS: ");
	 scanf("%d",&n);
 
for(i=0;i<n;i++){                
	
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
	sum += a[i];
	}
		printf("\n%d",sum);
}