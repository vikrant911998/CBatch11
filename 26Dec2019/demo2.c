#include<stdio.h>

// a = 10,b =20 ->a = 20,b=10

int main(){
    int a[7] = {12,11,39,81,6,17,92};
    int evenCount = 0, oddCount = 0,i=0;

    for(i=0 ; i<=6 ; i++){
        
        if(a[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }

    }

    printf("EVEN Count = %d\n",evenCount);
    printf("ODD Count = %d\n",oddCount);




    return 0;
}