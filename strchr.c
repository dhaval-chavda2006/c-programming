//finding char into string

#include<stdio.h>
#include<string.h>
void main(){
	char ch1[20] = "radhakrishna";
	char ch2 = 'k';
	
	printf("%s",strchr(ch1,ch2));
}