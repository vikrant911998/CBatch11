#include<stdio.h>


typedef struct Student{
    int roll_no;
    char name[20];
}Student;



int main(){
    Student s;

    
    printf("Enter the Name\n");
    // scanf("%s",s.name);
    gets(s.name);

    printf("Enter the Rollno\n");
    scanf("%d",&s.roll_no);


    printf("Roll No = %d\n",s.roll_no);
    printf("Name = %s\n",s.name);
    
    
    return 0;
}

