#include <stdio.h>
#include <stdlib.h>

int main()
{
    int summation =0;
    int numberOfTerms=0;
    int distance=0;
    int firstTerm=0;

    printf("Enter First Term (a0) : ");
    scanf("%d", &firstTerm);

    printf("Enter Distance (d) : ");
    scanf("%d", &distance);

    printf("Enter Number of Terms : ");
    scanf("%d", &numberOfTerms);

    int counter=1;

    while(counter<=numberOfTerms){
        int term= firstTerm + (counter-1)*distance;
        summation+=term;
        printf("%d ", term);
        counter++;
    }

    printf("\nThe Summation is %d.\n", summation);


    return 0;
}
