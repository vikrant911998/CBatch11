#include<stdio.h>

int main(){
    int a = 10,b = 20;
    int c = 0;

    c = a;
    a = b;
    b = c;

    printf("A = %d and B = %d\n",a,b);

    return 0 ;
}