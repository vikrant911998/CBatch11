#include<stdio.h>

int main(){ 
    int a[10] = {0};
    int i=0;

    // printf("Enter the 10 Numbers for the Array\n");

    for(i=0 ; i<=9 ; i++){
        
        printf("Enter the %d element\n",i+1);
        scanf("%d",&a[i]);

    }


    printf("Array Elements are\n");

    for(i=0 ; i<=9 ; i++){
        printf("%d\n",a[i]);
    }



    return 0;
}