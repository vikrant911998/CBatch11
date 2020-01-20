#include<stdio.h>

#define PF 1400

#define HRA(basic) (basic*0.3)
#define DA(basic) (basic*0.2)
#define TA(basic) (basic*0.1)
#define NETSAL(basic,hra,da,ta)((basic+hra+da+ta)-PF)


int main(){
    int basicSalary = 0;

    printf("Enter the Basic salary\n");
    scanf("%d",&basicSalary);

    double hra = HRA(basicSalary);
    double da = DA(basicSalary);
    double ta = TA(basicSalary);


    double netSal = NETSAL(basicSalary,hra,da,ta);

    printf("Net Salary = %lf\n",netSal);

    return 0;
}