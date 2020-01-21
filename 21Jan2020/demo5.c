//UNION POINTERS AND DMA

#include<stdio.h>
#include<stdlib.h>


typedef union Student{
    int id;
    int rollno;
}Student;


int main(){

    Student *ptr = (Student *)malloc(sizeof(Student));
    
    ptr->rollno = 2000;

    printf("ID = %d\n",ptr->id);
    printf("Roll No = %d\n",ptr->rollno);

    return 0;
}
