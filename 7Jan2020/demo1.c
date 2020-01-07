#include<stdio.h>

//No return Type and with arguments.
void area(int , int);


int main(){
    int l,b;

    printf("Enter the length and breadth\n");
    scanf("%d%d",&l,&b);

    area(l,b);

    return 0;
}


void area(int l, int b){
    int a = l*b;
    printf("Area = %d\n",a);
}

