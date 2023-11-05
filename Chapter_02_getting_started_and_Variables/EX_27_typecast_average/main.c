#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    int number2;
    float average;

    printf("Enter first Number : ");
    scanf("%d", &number1);

    printf("Enter second Number : ");
    scanf("%d", &number2);

    average = (float)(number1+number2)/2;

    printf("Average = %f\n",average);

    return 0;
}
