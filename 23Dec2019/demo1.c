#include<stdio.h>

int main(){ 
    int number,reverse=0,temp;

    printf("Enter a Number\n");
    scanf("%d",&number);

    printf("Real Number = %d\n",number);

    while(number != 0){
        temp = number % 10;
        reverse = reverse *10 +temp;
        number = number/10;
    }

    printf("Reversed Number = %d\n",reverse);

    return 0;
}