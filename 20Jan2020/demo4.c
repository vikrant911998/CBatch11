#include<stdio.h>
#include<string.h>


int main(){
    char str[20] = "Computer";
    char str1[20];

    strcpy(str1,str);

    // printf("%s\n",str);
    // printf("%s\n",str1);

    int result = strcmp("Aello",str1);

    printf("Result = %d\n",result);

    return 0;
}
 