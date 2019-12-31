#include<stdio.h>

void add();

int main(){
    add();

    return 0;
}

void add(){
    int a,b;

    printf("Enter two Numbers\n");
    scanf("%d%d",&a,&b);

    printf("Sum of Two Numbers is %d\n",a+b);

}