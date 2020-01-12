#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the Three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    if( a>b && a>c ){
        printf("Number %d is greatest \n",a);
    }
    else if( b>a && b>c ){
        printf("Number %d is greatest \n",b);
    }
    else{
        printf("Number %d is greatest \n",c);
    }

    
    if( a<b && a<c ){
        printf("Number %d is smallest \n",a);
    }
    else if( b<a && b<c ){
        printf("Number %d is smallest \n",b);
    }
    else{
        printf("Number %d is smallest \n",c);
    }


    return 0;
}