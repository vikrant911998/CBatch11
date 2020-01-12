//DMA(Dynamic Memory Allocation)

#include<stdio.h>
#include<stdlib.h>

//(int *)<-(void *)malloc(size of block)

int main(){ 
    int a = 2;
    int *p = (int *)malloc(sizeof(a));

    *p = 100;

    printf("%d \n",*p);
    printf("%d \n",p);

    return 0;
}