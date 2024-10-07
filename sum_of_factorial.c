//sum of 1!+2!+3!...n!

#include <stdio.h>

int main() {
    int i, n, f, j, sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    i=1;
while(i<=n)
{
		f=1;
		j=1;
		
while(j<=i){
	f *= j;
	j++;
	}
	sum += f;
	i++;
}

printf("sum from 1! to %d! = %d",n,sum);
    

} 