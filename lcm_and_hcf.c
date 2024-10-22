//lcm and hcf of a no.

#include<stdio.h>
void main(){
	int n1,n2,i,lcm,hcf;
	
	printf("\nENTER TWO NO.");
	scanf("%d %d",&n1,&n2);
	
for(i=1;i<=n1 && i<=n2;i++){
	
	if(n1%i==0 && n2%i==0){
		hcf=i;
	}
}
lcm = n1*n2/hcf;

printf("\nLCM OF %d & %d = %d",n1,n2,lcm);
printf("\nHCF OF %d & %d = %d",n1,n2,hcf);	
	
}