#include<stdio.h>

// [ [a,b] , [c,d] , [e,f] ]

int main(){
    int a[3][2];
    int i=0,j=0;

    printf("Enter the 6 elements\n");
    for( i=0 ; i<3 ; i++){

        for( j=0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
        }

    }


    printf("\nArray Elements are: \n");
    printf("[ ");
    for( i=0 ; i<3 ; i++ ){
        
        printf("[");
        for( j=0 ; j<2 ; j++){
            printf("%d",a[i][j]);
            if(j != 1)
                printf(",");
        }
        printf("]");
        if(i != 2)
            printf(" , ");
    }
    printf(" ]\n");


    return 0;
}