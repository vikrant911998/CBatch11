//Question No.2
//1.No return type and No arguments

#include<stdio.h>

void rectangle();


int main(){
    rectangle();

    return 0;
}


void rectangle(){
    float l,b;

    printf("Enter the Length and breadth\n");
    scanf("%f%f",&l,&b);

    printf("Area = %f\n",l*b);
    printf("Perimeter = %f\n",2*(l+b));

}