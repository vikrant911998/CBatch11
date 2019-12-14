//Logical Operator( && , || )

#include<stdio.h>

int main(){
    int a = 10,b = 20,c = 30;

    //|| -> OR
    printf("Result = %d\n",a>b || b>c || a<c);

    //&& -> AND 
    // printf("Result = %d\n",a<b && b<c && a<c);

    return 0;
}

// && ->AND
// A && B ->True when A and B both are True.
// A && B ->False when A is False and B is True.
// A && B ->False when A is True and B is False.
// A && B ->False when A is False and B is False.


// || ->OR
// A || B ->True when A and B both are True.
// A || B ->True when A is False and B is True.
// A || B ->True when A is True and B is False.
// A || B ->False when A is False and B is False.