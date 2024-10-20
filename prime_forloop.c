//find if it is prime or not using while loop

#include <stdio.h>

void main() {
    int i,n,prime=1;  
    
    printf("ENTER NO: ");
    scanf("%d",&n);
    
   
  for(i=2;i<n;i++){
  	
  	if(n%i==0){
  		
  		prime=0;
  		break;
	  }
	  	
  } 
  
  if(prime){
  
  printf("%d is a prime no.\n",n);	
  }
  else{
	printf("%d is not prime no.\n",n); 
}
}