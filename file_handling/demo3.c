#include<stdio.h>

int main(){
    FILE *file;
    file = fopen("example.txt","r+");
    
    char arr;
    
    while(arr != EOF){
        arr = fgetc(file);
        printf("%c\n",arr);
    }
    printf("\n");

    fclose(file);

    return 0;
}