//max and min no.

#include <stdio.h>
int main() {
    int i,n,max,min,a[10];
	
	printf("ENTER N = ");
	scanf("%d",&n);
	
        for (i = 0; i < n; i++) {
        	
        	printf("\na[%d] = ",i);
        	scanf("%d",&a[i]);}
        	
        	max = a[0];
        	min = a[0];
        	
        
        for (i=0;i<n;i++) {
        	
        if(max < a[i]){
        	max = a[i];
		}	
        if(min > a[i]){
        	min = a[i];
		}
        }
        printf("\nMAX = %d",max);
        printf("\nMIN = %d",min);
}