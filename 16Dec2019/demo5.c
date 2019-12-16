#include<stdio.h>

int main(){
    int a;

    printf("Enter a Number\n");
    scanf("%d",&a);

    if( a>=90  && a<=100 ){
        printf("Grade A\n");
    }
    else if( a<=89 && a>=70 ){
        printf("Grade B\n");
    }
    else if( a<=69 && a>=50 ){
        printf("Grade C\n");
    }
    else if( a<50 ){
        printf("Grade D\n");
    }
    
    return 0;
}


