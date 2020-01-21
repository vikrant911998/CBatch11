//UNION POINTERS

#include<stdio.h>

union Student{
    int id;
    int rollno;
};


int main(){
    union Student s1;

    s1.id = 101;

    union Student *ptr = &s1;
    
    printf("ID = %d\n",ptr->id);
    printf("Roll No = %d\n",ptr->rollno);

    return 0;
}
