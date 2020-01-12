//DMA(Dynamic Memory Allocation)
#include<stdio.h>
#include<stdlib.h>

//(datatype *)<-(void *)calloc(no. of blocks, size of each block)

int main(){ 
    int *ptr = (int *)calloc(5,sizeof(int));
    int i=0;
    
    for(i=0;i<5;i++){
        *(ptr+i) = i+10;
        // ptr[i] = i+10;
    }


    for(i=0;i<5;i++){
        printf("%d ---- %d\n",ptr[i],(ptr+i));
    }

    return 0;
}
