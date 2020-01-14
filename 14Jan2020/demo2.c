//Structure pointer in main function

#include<stdio.h>
#include<stdlib.h>

//Structure Definition
typedef struct Student{
    int roll_no;
    char name[20];
}Student;



int main(){
    // Student s1;
    Student *s = (Student *)malloc(sizeof(Student));

    printf("Enter the Rollno\n");
    scanf("%d",&s->roll_no);

    // fflush(stdin);
    
    printf("Enter the Name\n");
    scanf("%s",s->name);

    
    printf("Roll No = %d\n",s->roll_no);
    printf("Name = %s\n",s->name);
    
    
    return 0;
}

 