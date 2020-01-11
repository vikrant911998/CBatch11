#include<stdio.h>

int main(){
    int a[5] = {10,20,30,40,50};
    int *ptr = a;
    int i=0;


    for(i=0;i<5;i++){
       printf("%d\n",(ptr+i)); 
    }
   //  printf("\n");
   //  *(ptr+2) = 99;

   //  for(i=0;i<5;i++){
   //     printf("%d\n",a[i]); 
   //  }
    // printf("%d\n",*(ptr+0));
    // printf("%d\n",*(ptr+1));
    // printf("%d\n",*(ptr+2));
    // printf("%d\n",*(ptr+3));
    // printf("%d\n",*(ptr+4));
    
    // printf("%p\n",a);
    // printf("%p\n",ptr);


    return 0;
}