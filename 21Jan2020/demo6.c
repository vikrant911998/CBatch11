//UNION POINTERS WITH FUNCTION

#include<stdio.h>

typedef union Student{
    char name[20];
}Student;


void userInput(Student *student){
    printf("Enter the Student Name\n");
    scanf("%s",student->name);
}

void output(Student *student){
    printf("Student Name = %s\n",student->name);
}


int main(){
    Student s1;

    userInput(&s1);

    output(&s1);

    return 0;
}