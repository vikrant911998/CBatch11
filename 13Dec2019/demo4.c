#include<stdio.h>

int main(){ 
    float principal,rate;
    int time;
    float si;

    printf("Enter the principal rate of interest and time\n");
    scanf("%f%f%d",&principal,&rate,&time);

    si = (principal*rate*time)/100;

    printf("Simple Interest = %f\n",si);

    return 0;
}

// 2*(l+b)