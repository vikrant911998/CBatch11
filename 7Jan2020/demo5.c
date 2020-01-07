//Question No.2
//3.with return type and with arguments

#include<stdio.h>

float area(float, float);
float perimeter(float, float);


int main(){
    float l,b;

    printf("Enter the Length and breadth\n");
    scanf("%f%f",&l,&b);

    printf("Area = %f\n", area(l,b));
    printf("Perimeter = %f\n", perimeter(l,b));

    return 0;
}


float area(float l, float b){

    return (l*b);
}

float perimeter(float l, float b){

    return (2*(l+b));
}