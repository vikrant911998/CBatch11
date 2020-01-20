#include<stdio.h>

#define simple_interest(p,r,t) ((p*r*t)/100)

int main(){

    double p,r;
    int t;

    printf("Enter the Principal, Rate and Time\n");
    scanf("%lf%lf%d",&p,&r,&t);

    double si = simple_interest(p,r,t);

    printf("Simple Interest = %lf\n",si);

    return 0;
}