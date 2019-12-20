#include<stdio.h>

int main(){
    int num,temp,sum = 0;

    printf("Enter a Number\n");
    scanf("%d",&num); //34567

    while(num != 0){ 

        temp = num%10; 
        sum = sum + temp; 
        num = num /10; 

    }
    printf("Sum Of Digits is %d\n",sum);

    return 0;
}


// a = 345673;
// r = 376543;