//structure pointer with function

#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
    int roll_no;
    char name[20];
}Student;

Student * userInput(){
    Student *s = (Student *)malloc(sizeof(Student));

    printf("Enter the Roll No\n");
    scanf("%d",&s->roll_no);

    printf("Enter the Name\n");
    scanf("%s",s->name);

    return s;
}

void display(Student *s){

    printf("Roll No = %d\n",s->roll_no);
    printf("Name = %s\n",s->name);

}

int main(){
    Student *s1 = userInput();
    display(s1);


    return 0;
}
