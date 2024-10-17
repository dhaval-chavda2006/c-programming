// pattern of column = 5(j), row = 5(i)
/*	*****
	****
	***
	**
	*	
	        */

#include<stdio.h>
void main(){
	 int i,j;
	 
for(i=1;i<=5;i++){
	
	for(j=5;j>=i;j--){
		
		printf("*");
	}
	printf("\n");
}
}