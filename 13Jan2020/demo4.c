//DMA -> free() -> frees the memory.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    printf("Value = %d\n",ptr);

    free(ptr);

    printf("Value = %d\n",ptr);

    return 0;
}
