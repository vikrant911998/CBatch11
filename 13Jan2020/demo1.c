//DMA -> malloc -> single memory block.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int *)malloc(sizeof(int));
        
    *ptr = 999;

    printf("%d\n",*ptr);
    printf("%p\n",ptr);

    return 0;
}


//Malloc(size of block) -> To dynamically create a single Memory Block.