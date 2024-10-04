#include<stdio.h>
#include<math.h>
void main(){
	
	int num,original,r,sum=0,c=0;
	
	printf("ENTER NO.: ");
	scanf("%d",&num);
	
	original = num;
while(num>0){
	
	num=num/10;
	c++;
}
		num = original;
while(num>0){
	r =num % 10;
	sum = sum + pow(r,c);
	num = num/10;

}

if(sum == original){
	printf("ARMSTRONG");
}
else{
	printf("NOT ARMSTRONG");
}	
}