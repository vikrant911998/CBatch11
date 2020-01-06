//2.No return type and with arguments.

#include<stdio.h>
//Function declaration
void demo(int);


int main(){
    int number;

    printf("Enter a Number\n");
    scanf("%d",&number);

    //Function Calling.
    demo(number,number,'$'); //arguments(actual arguments)


    return 0;
}

//Function definition
void demo(int a,int b,char c){ //parameters(formal arguments)
    printf("Square = %d\n",a*a);
}