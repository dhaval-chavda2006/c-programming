// print square and cube

#include <stdio.h>
void main() {
    int a,sq,cube;
	
	printf("ENTER THE NO: ");
	scanf("%d",&a);    
	
	sq = a*a;
	cube = a*a*a;
	
	printf("SQUARE OF A NO. = %d",sq);
	printf("CUBE OF A NO. = %d",cube);
}