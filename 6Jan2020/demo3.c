//3.with return type and with arguments

#include<stdio.h>
double demo(double);



int main(){
    int number;

    printf("Enter the Number\n");
    scanf("%d",&number);

    int result = demo(number);

    // printf("Result = %d\n",result);
    printf("Result = %lf\n",demo(5.78));

    return 0;
}



double demo(double a){

    return (a*2);
}