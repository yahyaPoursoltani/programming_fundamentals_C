#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Example of continue
    for(int i=1; i<=20; i++){
        if(i%2==0){
            printf("%d\n",i);
        }else{
            continue;
        }
    }


    //Example of break
    for(int i=1; i<=20; i++){
        if(i!=12){
            printf("%d\n",i);
        }else{
            break;
        }
    }
}
