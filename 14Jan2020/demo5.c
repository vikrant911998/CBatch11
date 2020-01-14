// Structure Array

#include<stdio.h>

typedef struct Student{
    int roll_no;
    char name[20];
}Student;

void userInput(Student *s){

    printf("Enter the Roll No\n");
    scanf("%d",&s->roll_no);

    printf("Enter the Name\n");
    scanf("%s",s->name);
}

void display(Student *s){

    printf("Roll No = %d\n",s->roll_no);
    printf("Name = %s\n",s->name);

}


int main(){
    Student sarr[2];
    int i=0;

    // Student s1,s2;


    // userInput(&s1);
    // userInput(&s2);

    // sarr[0] = s1;
    // sarr[1] = s2;

    Student s1;

    for(i=0;i<2;i++){
        userInput(&s1);
        sarr[i] = s1;
    }

    printf("\nStudent Details\n");

    for(i=0;i<2;i++){
        display(&sarr[i]);
    }


    // display(&s1);
    // display(&s2);



    return 0;
}