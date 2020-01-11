#include<stdio.h>

//Call BY Reference.
void swap(int *,int *);

int main(){
    int a = 10, b = 20;

    swap(&a,&b);

    printf("A= %d and B= %d\n",a,b);

    return 0;
}

void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c; 

}