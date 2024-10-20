//find if it is prime or not using while loop

#include <stdio.h>

void main() {
    int i,n,is_prime=1;  
    
    printf("ENTER NO: ");
    scanf("%d",&n);
    
   i = 2;
  while(i<n){
  	
  	if(n%i==0){
  		
  		is_prime=0;
  		break;
	  }
	  i++;	
  } 
  
  if(is_prime){
  
  printf("%d is a prime no.\n",n);	
  }
  else{
	printf("%d is not prime no.\n",n); 
}
}
