//UNIONS 

#include<stdio.h>

union Student{
    int id;
    int rollno;
};



int main(){
    union Student s1;
    s1.id = 101;
    
    s1.rollno = 102;

    printf("Id = %d\n",s1.id);
    printf("Roll No = %d\n",s1.rollno);
    

    return 0;
}
