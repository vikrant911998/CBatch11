#include<stdio.h>

int * show(int []);

int main(){
    int i=0;
    int a[5] = {10,20,30,40,50};

    printf("Array Before\n");
    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }

    int *ptr = show(a);

    printf("\nArray After\n");
    for(i=0;i<5;i++){
        printf("%d  ",ptr[i]);
    }

    printf("\n");

    return 0;
}

int * show(int arr[]){
    int i=0;
    for(i=0;i<5;i++){
        arr[i] = i*5;
    }

    return arr;
}