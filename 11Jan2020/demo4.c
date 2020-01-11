#include<stdio.h>

void print(int *);

int main(){
    int a[5] = {10,20,30,40,50};


    print(a);

    return 0;
}

void print(int *arr){
    int i=0;

    for(i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }

    printf("\n");
}