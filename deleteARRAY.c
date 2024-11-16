//deleting array

#include<stdio.h>
void main(){
	
	int i,n,pos,a[10];
	
	printf("ENTER N = ");
	scanf("%d",&n);
	
for(i=0;i<n;i++)
{
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
}
		printf("ENTER POSITION TO DELETE = ");
		scanf("%d",&pos);
		
for(i=pos-1;i<n-1;i++)
{
	a[i] = a[i+1];
}
printf("NEW ARRAY = %d",a[i]);

for(i=0;i<n;i++){
	
	printf("\n new elements = a[%d]",a[i]);
}	
}