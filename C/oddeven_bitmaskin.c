//WAP to find whether a number is odd or even without the modulus operator
//Solution approach: Bitmasking 
//Hint: Last digit is 1 for the binary equivalent of odd numbers 

#include <stdio.h>

void check(int n);

int main()
{
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    check(a);

    return 0;
}

void check(int n)
{
    if(n & 1 == 1)
        printf("\n %d is an odd number!", n);
    else
        printf("\n %d is an even number!", n);
}
