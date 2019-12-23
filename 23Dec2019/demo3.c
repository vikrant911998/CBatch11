#include<stdio.h>

int main(){
    int a;

    printf("Enter a Number\n");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("Inside First If\n");
        
        if(a > 10){
            printf("Inside Second If\n");
            
            if(a<60){
                printf("Number is greater than 10 but less than 60.\n");
            }
            else{
                printf("Number is greater than 60.\n");
            }
        }
        else{
            printf("Number is smaller than 10\n");
        }

    }
    else{
        printf("Number is Odd.\n");
        // if(){

        // }
    }


    return 0;
}