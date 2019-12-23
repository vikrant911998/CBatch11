#include<stdio.h>


int main(){
    int n,i=1,sum=0;

    printf("Enter a Number\n");
    scanf("%d",&n);

    while(i<=n){
        sum = sum+(i*i); //sum += i*i; 
        i++;
    }
    printf("Cube Sum = ");

    return 0;
}