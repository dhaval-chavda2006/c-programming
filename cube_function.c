//cube by using function(call by value)

#include<stdio.h>
int cube(int a); 
void main()
{
    int a, result; 

    printf("ENTER A = ");
    scanf("%d", &a);

    result = cube(a); 
    printf("THE CUBE OF NO = %d\n", result);
}
int cube(int a)
{
    return a * a * a; 
}
