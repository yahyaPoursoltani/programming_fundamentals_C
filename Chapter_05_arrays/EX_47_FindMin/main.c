#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 1000000000
#define SIZE 100

int main()
{
    int numberOfElements=0;
    int min= INT_MAX;
    int minIndex=0;

    //get number of elements
    scanf("%d", &numberOfElements);

    //array of elements
    int elements[numberOfElements];

    //read values in order to add to array
    for(int i=0; i<numberOfElements; i++){
        scanf("%d", &elements[i]);
    }

    //find minimum elemnt
    for(int i=0; i<numberOfElements; i++){
        if(elements[i]<min){
            min = elements[i]; //value of minimum element
            minIndex= i;       //minimum elements index
        }
    }

    printf("Minimum Located at %d and its value is %d.\n", minIndex, min);
    return 0;
}
