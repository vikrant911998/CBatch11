#include<stdio.h>

int main(){
    int a,b,c;
    int *p1,*p2,*p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Enter the Three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);


    if( *p1>*p2 && *p1>*p3){
        printf("Number %d is greatest \n",*p1);
    }
    else if( *p2>*p1 && *p2>*p3 ){
        printf("Number %d is greatest \n",*p2);
    }
    else{
        printf("Number %d is greatest \n",*p3);
    }
    

    if( *p1<*p2 && *p1<*p3){
        printf("Number %d is smallest \n",*p1);
    }
    else if( *p2<*p1 && *p2<*p3 ){
        printf("Number %d is smallest \n",*p2);
    }
    else{
        printf("Number %d is smallest \n",*p3);
    }

    
    


    return 0;
}