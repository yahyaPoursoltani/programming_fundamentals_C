#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int digits=0;

    printf("Enter a Number : ");
    scanf("%d",& number);

    while(number!=0){
        number/=10;
        digits++;
    }

    printf("Number of Digits is %d\n",digits);

    return 0;
}
