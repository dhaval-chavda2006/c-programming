// print 1,2,4,8,16,32

#include<stdio.h>
void main(){
	
	int i,n;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	
	i = 1;
while(i<=n){
	
	printf("\n%d",i);	
	i=i*2;

}


}