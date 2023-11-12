#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number=0;
    int counter=0;
    float sum=0;
    float average=0;

    while(number!=-1){
        printf("Enter Number : ");
        scanf("%f", &number);
        if(number!=-1){
            counter++;
            sum+=number;
        }

    }

    average = sum/counter;
    printf("Average = %f\n", average);

    return 0;
}
