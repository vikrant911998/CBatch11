//DMA -> calloc -> many memory blocks.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int *)calloc(5,sizeof(int));
    int i=0;

    for(i=0;i<5;i++){
        // *(ptr+i) = i+10;
        ptr[i] =  i+10;
        
    }

    for(i=0;i<5;i++){
        printf("%d  ",ptr[i]);
    }

    printf("\n");
    
    

    return 0;
}


//calloc(no. of blocks, size of each block) ->returns address of first memory block.

