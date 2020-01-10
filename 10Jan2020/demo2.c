#include<stdio.h>

void checkNumber(int);

int main(){
    int number;

    printf("Enter the Number\n");
    scanf("%d",&number);

    checkNumber(number);

    return 0;
}


void checkNumber(int a){
    if(a > 0){
        printf("Positive Number\n");
    }
    else{
        printf("Negative Number\n");
    }
}