//Question No.2
//4.with return type and no arguments

#include<stdio.h>

float area();
float perimeter();


int main(){

    printf("Area = %f\n", area());
    printf("Perimeter = %f\n", perimeter());

    return 0;
}


float area(){
    float l,b;

    printf("Enter the Length and breadth\n");
    scanf("%f%f",&l,&b);

    return (l*b);
}

float perimeter(){
    float l,b;

    printf("Enter the Length and breadth\n");
    scanf("%f%f",&l,&b);

    return (2*(l+b));
}