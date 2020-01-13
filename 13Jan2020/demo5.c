#include<stdio.h>

void calculatePower(int,int);

int main(){
    int a,b;

    printf("Enter the Value of base and exponent\n");
    scanf("%d%d",&a,&b);
    
    calculatePower(a,b);


    return 0;
}


void calculatePower(int a,int b){
    int result =1,i;


    for(i=1;i<=b;i++){
        result = result*a; //2
    }

    printf("Final Result = %d\n",result);
}