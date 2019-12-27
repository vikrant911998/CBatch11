#include<stdio.h>

int main(){
    int a = 10,b = 20;

    a = a+b; //30;
    b = a-b; // 30-20 = 10;
    a = a-b; //30-10 = 20;

    printf("A = %d and B = %d\n",a,b);


    return 0 ;
}