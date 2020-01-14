//structure inside the main function

#include<stdio.h>

//Structure Definition
typedef struct Student{
    int roll_no;
    char name[20];
}Student;



int main(){

    Student s;

    printf("Enter the Rollno\n");
    scanf("%d",&s.roll_no);

    fflush(stdin);
    
    printf("Enter the Name\n");
    gets(s.name);

    
    printf("Roll No = %d\n",s.roll_no);
    printf("Name = %s\n",s.name);
    
    
    return 0;
}

 