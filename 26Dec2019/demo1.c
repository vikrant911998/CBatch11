#include<stdio.h>
#include<stdbool.h>

int main(){
    int a[7] = {12,32,71,16,81,3,11};
    int num = 0,i=0;
    bool isFound = false;

    printf("Enter the Number to be searched\n");
    scanf("%d",&num);

    for(i=0 ; i<=6 ; i++){
        
        if(a[i] == num){
            isFound = true;
            printf("Element Found\n");
            break;
        }
    }

    if(isFound == false){
        printf("Element Not Found\n");
    }

    return 0;
}