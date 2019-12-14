#include<stdio.h>

int main(){
    int a;

    printf("Enter a Number\n");
    scanf("%d",&a);

    // int remainder = a%2;

    if(a%2 == 0){
        printf("Number is Even\n");
    }

    return 0;
}