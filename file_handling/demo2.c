#include<stdio.h>


int main(){
    FILE *file;
    file = fopen("example.txt","r+");
    
    char arr[100];
    
    fscanf(file,"%s",arr);

    printf("%s\n",arr);
    

    fclose(file);

    return 0;
}