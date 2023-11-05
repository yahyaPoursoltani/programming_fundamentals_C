#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber;
    int secondNumber;
    int quotient=0;

    printf("Enter Number1 : ");
    scanf("%d", &firstNumber);

    printf("Enter Number2 : ");
    scanf("%d", &secondNumber);

    while(firstNumber>secondNumber){
        quotient++;
        firstNumber-=secondNumber;
    }

    printf("Integer Part of Division Result is %d\n",quotient);

    return 0;
}
