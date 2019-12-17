#include<stdio.h>

int main(){
    char c;

    printf("Enter a Character\n");
    scanf("%c",&c); //C

    switch( c ){
        
        case 'A':printf("Character is A\n");
            break;
        default :printf("Character is Default\n");
            break;
        case 'B':printf("Character is B\n");
            break;
        case 'C':printf("Character is C\n");
            break;
        
    };

    return 0;
}