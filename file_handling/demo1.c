#include<stdio.h>

//open -> modify ->close;

//open->fopen(filepath,mode);
//fscanf(filePointer,"format specifiers",variables);
//fprintf(filePointer,"format specifiers",variables);
//close->fclose(file);

int main(){
    FILE *file;
    file = fopen("example.txt","w+");
    
    char name[100];
    printf("Enter the Text\n");
    // scanf("%s",name);
    gets(name);

    fprintf(file,"\n%s\n",name);


    fclose(file);

    return 0;
}