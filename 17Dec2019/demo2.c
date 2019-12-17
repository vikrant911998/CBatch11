#include<stdio.h>

//Ternary(Conditional) Operator
int main(){
    int a = 10,b;

    b = (a%2 == 0) ? 3 : 2;
    //b=3;
    //b=2;
    printf("A = %d and B = %d\n",a,b);


    return 0;
}