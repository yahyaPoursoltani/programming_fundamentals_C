#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=0;
    int number2=0;

    scanf("%d", &number1);
    scanf("%d", &number2);

    while(number2 <= number1){
        printf("Try Again : \n");
        scanf("%d", &number1);
        scanf("%d", &number2);
    }

    printf("Done!");

    return 0;
}
