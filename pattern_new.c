#include <stdio.h>

int main() {
    int num = 1;  
    int rows = 4; 
    int i;       


    for (i = 1; i <= rows; i++) {
        int j; 
        
        for (j = 1; j <= i; j++) {
            printf("%d", num); 
            num++;  
        }
        printf("\n");  
    }
}