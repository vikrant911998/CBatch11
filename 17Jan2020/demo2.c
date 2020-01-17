//Include Preprocessor
#include<stdio.h>

#define perimeter(l,b) (2*(l+b))

int main(){
    int result = perimeter(20,10);

    printf("Result = %d\n",result);
    
    return 0;
}