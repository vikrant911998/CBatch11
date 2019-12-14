//OPerators
// 1.Arithmetic Operator(+,-,*,/,++,--,%)
//++,-- ->Unary Operators(Single Operand)
//+,-,*,/,% ->Binary Operators(Two Operands)

#include<stdio.h>


int main(){ 
    int a = 20,b;

    // a-- -> a = a-1
    //-- ->Decrement Operator
    b = --a;
    printf("B = %d and A = %d\n",b,a);

    // b = a--; //Post Decrement
    // printf("B = %d and A = %d\n",b,a);



    // ++ ->Increment Operator
    // b = ++a; // Pre Increment
    // printf("B = %d and A = %d\n",b,a);
    // b = a++; //Post Increment
    // printf("B = %d and A = %d\n",b,a);




    // printf("%d\n",a+b);
    // printf("%d\n",a-b);
    // printf("%d\n",a*b);
    // printf("%d\n",a/b);
    // printf("%d\n",a%b);

    return 0;
}
