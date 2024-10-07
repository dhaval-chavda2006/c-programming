// 1-2+3-4+5-6+7..

#include <stdio.h>

void main() {
    int i,n,total = 0;  
    
    printf("ENTER: ");
    scanf("%d",&n);
    
    
    for (i = 1; i <= n; i++) {
       
	    if (i % 2 == 0) {
            total -= i; 
        } else {
            total += i;  
        
        }
    }

    
    printf("The total of the series is: %d\n", total);


}