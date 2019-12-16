#include<stdio.h>

int main(){
    int a;

    printf("Enter a Number\n");
    scanf("%d",&a);

    if( a>0 || a%2==0 ){
        printf("Number is Even Positive\n");
    }
    else{
        printf("Number is Not Even Positive\n");
    }
    
    return 0;
}


