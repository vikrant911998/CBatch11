#include<stdio.h>

// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

int main(){
    int i=1,j=1;

    for(i=1 ; i<=5 ; i++){

        for(j=5 ; j>=1 ; j--){

            printf("%d ",j);

        }

        printf("\n");

    }

    return 0;
}