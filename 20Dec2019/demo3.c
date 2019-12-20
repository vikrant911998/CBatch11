#include<stdio.h>

int main(){
    int i,j;


    for(i=1, j=20 ; i<=10 ; i++,j--){
        if(i== 10){
            printf("%d   |     %d\n",i,j);
        }
        else{
            printf("%d    |     %d\n",i,j);    
        }
        
    }

    return 0;
}