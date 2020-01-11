#include<stdio.h>

int main(){
    int a = 2;
    int *ptr = &a;

    *ptr = 100;

    

    printf("Value = %d\n",a);
    printf("Value = %d\n",*ptr);
    printf("Address = %p\n",&a);
    printf("Address = %p\n",ptr);


    return 0;
}