#include<stdio.h>

void checkTriangle(int,int,int);

int main(){
    int s1,s2,s3;
    printf("Enter the Three sides of the triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    checkTriangle(s1,s2,s3);

    return 0;
}


void checkTriangle(int s1,int s2,int s3){
    if( s1 == s2 && s2 == s3 ){
        printf("Equilateral Triangle\n");
    }
    else if(s1==s2 || s2==s3 || s3==s1){
        printf("Isoceles Triangle\n");
    }
    else{
        printf("Scalene Triangle\n");
    }
}