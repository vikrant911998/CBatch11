#include<stdio.h>

int main(){
    int a[3][2] = { {11,33} , {22,44} , {55,77} };
    int i=0,j=0;

    for( i=0 ; i<3 ; i++ ){

        for( j=0 ; j<2 ; j++){
            printf("%d ",a[i][j]);
        }

        printf("\n");

    }


    return 0;
}