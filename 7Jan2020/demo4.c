//Question No.2
//2.No return type and with arguments

#include<stdio.h>

void rectangle(float, float);


int main(){
    float l,b;

    printf("Enter the Length and breadth\n");
    scanf("%f%f",&l,&b);

    rectangle(l,b);

    return 0;
}


void rectangle(float l, float b){

    printf("Area = %f\n",l*b);
    printf("Perimeter = %f\n",2*(l+b));

}