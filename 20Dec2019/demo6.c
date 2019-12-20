#include<stdio.h>

int main(){
    int a,i=1;
    int sum = 0;

    printf("Enter a Number\n");
    scanf("%d",&a);

    while(i <= a){ // 5<=10
        sum = sum+ i; // sum = 15
        i++; //5
    }

    printf("Sum  = %d\n",sum);
    
    return 0;
}