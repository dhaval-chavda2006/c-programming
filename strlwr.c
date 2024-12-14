//lowercase one string

#include<stdio.h>
#include<string.h>
void main(){
	char ch1[10],ch2[10];
	
	printf("enter first string = ");
	gets(ch1);
	
//	printf("enter second string = ");
//	gets(ch2);
	
	strlwr(ch1);
	printf("the value of first string =%s",ch1);
}