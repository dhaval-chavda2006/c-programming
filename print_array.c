//printing number in array

#include<stdio.h>
void main(){
    int i,n,a[5];

    printf("enter n= ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);}

        for ( i = 0; i < n; i++)
        {
            printf("\n%d",a[i]);
        } 
}