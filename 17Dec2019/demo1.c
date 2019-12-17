#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the Three sides of the Triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    if( a==b && b==c ){
        printf("Equilateral Triangle\n");
    }
    else if( a==b || b==c || c==a ){
        printf("Isoceles Triangle\n");
    }
    else{
        printf("Scalene Triangle\n");
    }


    return 0;
}