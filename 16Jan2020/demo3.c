//Include Preprocessor
#include<stdio.h>

#define PI 3.14

int main(){
    const int A = 12;
    int r = 10;
    int area = PI*r*r;
    // A = 14; //-> error

    printf("Area = %d\n",area);

    return 0;
}