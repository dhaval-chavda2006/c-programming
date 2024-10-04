#include<stdio.h>
void main(){
	
	int year;
	printf("ENTER YEAR: ");
	scanf("%d",&year);
	
if(year % 4 ==0){
	printf("\nLEAP YEAR");
}
else{
	printf("\nNOT LEAP YEAR");
}
}