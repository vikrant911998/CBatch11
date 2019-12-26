#include<stdio.h>

int main(){
    int a[7]={12,11,39,81,6,17,92};
    int i=0,j=0,temp=0;


    for(i=0 ; i<=5 ; i++){

        for(j=0 ; j<=5 ; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }

    for(i=0;i<=6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}