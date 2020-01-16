#include<stdio.h>

typedef struct Student{
    int roll_no;
    char name[20];
    int age;
    char address[50];
}Student;

void input(Student *student){
    printf("Enter the Roll NO\n");
    scanf("%d",&student->roll_no);

    printf("Enter the Name\n");
    scanf("%s",student->name);

    printf("Enter the Age(Age should be between 11 to 14)\n");
    scanf("%d",&student->age);

    printf("Enter the Address\n");
    scanf("%s",student->address);

}

void output(Student *student){
    

    printf("Roll No = %d\n",student->roll_no);
    printf("Name = %s\n",student->name);
    printf("Age = %d\n",student->age);
    printf("Address = %s\n",student->address);
    printf("\n");
}

void printName(Student *student){
    printf("Name = %s\n",student->name);
}

void checkAge(Student a[]){
    printf("\nStudent having Age 14\n");
    int i=0;

    for(i=0;i<5;i++){
        if(a[i].age == 14){
            printName(&a[i]);
            printf("\n");
        }
    }
}

void checkRollNo(Student a[]){
    printf("\nStudent having Even Roll No. \n");
    int i=0;

    for(i=0;i<5;i++){
        if(a[i].roll_no % 2 == 0){
            printName(&a[i]);
            printf("\n");
        }
    }
}


int main(){
    Student arr[5];
    int i=0;
    Student s;

    for(i=0;i<5;i++){
        input(&s);
        arr[i] = s;
    }

    checkAge(arr);
    checkRollNo(arr);

    
    printf("\nStudent Details\n");

    for(i=0;i<5;i++){
        output(&arr[i]);
    }

    return 0;
}