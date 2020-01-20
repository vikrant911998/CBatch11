#include<stdio.h>
#include<string.h>


int main(){
    char str[30] = "Hello World";
    char str1[30] ="Hello Computer";

    int result = strncmp(str1,str,7);

    printf("%d\n",result);
    return 0;
}
 