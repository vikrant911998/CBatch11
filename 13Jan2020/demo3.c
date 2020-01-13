//DMA ->realloc ->re allocates memory to a single block.

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    printf("Size = %d bytes\n",sizeof(*ptr));

    double *p = (double *)realloc(ptr,8);
    *p = 234.345;

    printf("Size = %d bytes\n",sizeof(*p));

    return 0;
}


//realloc(address of block, new size)
