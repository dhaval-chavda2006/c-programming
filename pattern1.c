// pattern of column = 5, row = 5(i)
/*	1
	23
	456	
	78910	
	1112131415*/

#include<stdio.h>
void main(){
	 int i,j,n=1;
	 
for(i=1;i<=5;i++){
	
	for(j=1;j<=i;j++){
		
		printf("\t%d",n++);
	}
	printf("\n");
}
}
