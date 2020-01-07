//4.With return type and no arguments

#include<stdio.h>

int demo();

int main(){
    int accountNumber;


    accountNumber = demo();

    printf("Account Number = %d\n",accountNumber);

    return 0;
}

int demo(){
    int acc;
    printf("Enter the Account Number\n");
    scanf("%d",&acc);

    return acc;
}