#include<stdio.h>

//Function Declaration
void check(int );



int main(){
    //Function Calling.
    check(33);  //34-> actual arguments or argument.

    return 0;
}


//Function Definition
void check(int num){  //formal arguments  or parameters
    
    if(num %2 == 0){
        printf("Even Number\n");
    }
    else{
        printf("Odd Number\n");
    }


}




// Function-> It is just a block of code kept outside 
// the main function.
// function definition -> How logic is executed.

// return_type function_name(arguments){

//     return ;
// }

// 1. no return type and no arguments
