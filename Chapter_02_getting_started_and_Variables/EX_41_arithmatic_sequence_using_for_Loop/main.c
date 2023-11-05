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



    for(int counter=1;counter<=numberOfTerms;counter++){
        int term= firstTerm + (counter-1)*distance;

        if(counter%2==0){
            summation+=term;
        }

        printf("%d ", term);

    }

    printf("\nThe Summation of even Terms is %d.\n", summation);


    return 0;
}
