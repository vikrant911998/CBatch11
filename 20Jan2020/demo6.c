#include<stdio.h>
#include<string.h>


int main(){
    char str[20] = "Computer";
    char str1[20] ="Hello ";

    strcat(str1,str);

    printf("%s\n",str);
    printf("%s\n",str1);

    return 0;
}
 