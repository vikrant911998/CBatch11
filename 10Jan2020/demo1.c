//Question No.7
#include<stdio.h>

//function declarations
int takeBasicSalary();
float calHra(int);
float calDa(int);
float calTa(int);
void netSalary(int,float,float,float,int);


int main(){
    int basicSalary;
    float hra,da,ta;
    int PF = 1400;

    basicSalary = takeBasicSalary();
    printf("Basic Salary = %d\n",basicSalary);

    hra = calHra(basicSalary);
    da = calDa(basicSalary);
    ta = calTa(basicSalary);
    netSalary(basicSalary,hra,da,ta,PF);


    return 0;
}

void netSalary(int basic,float hra,float da,float ta,int PF){
    float ns = (basic+hra+da+ta)-PF;

    printf("Net Salary = %f\n",ns);

}


float calDa(int basicSal){
    return(basicSal*.2);
}

float calTa(int basicSal){
    return(basicSal*.1);
}

float calHra(int basicSal){
    return(basicSal*.3);
}

int takeBasicSalary(){
    int basicSal;

    printf("Enter the Basic Salary\n");
    scanf("%d",&basicSal);

    return basicSal;
}