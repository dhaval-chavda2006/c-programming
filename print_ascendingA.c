//ascending order in array

#include<stdio.h>
void main() {
    int a[10], n, i, j, temp = 0;
    
    printf("ENTER N (number of elements): ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	    
    for(i = 0; i < n - 1; i++) {
      for(j = i + 1; j < n; j++) {
          if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order = ");
    for(i = 0; i < n; i++) {
        printf("\n%d", a[i]);
    }
}