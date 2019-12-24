#include<stdio.h>

// 11111
// 22222
// 33333
// 44444
// 55555

// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


int main(){
    int i=1,j=1;

    for(i=1 ; i<=5 ; i++){

        for(j=1 ; j<=5 ; j++){

            printf("%d ",j);

        }

        printf("\n");

    }

    return 0;
}