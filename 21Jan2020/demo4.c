//UNION POINTERS AND DMA

#include<stdio.h>
#include<stdlib.h>


union Student{
    int id;
    int rollno;
};


int main(){

    union Student *ptr = (union Student *)malloc(sizeof(union Student));
    
    ptr->id = 101;

    printf("ID = %d\n",ptr->id);
    printf("Roll No = %d\n",ptr->rollno);

    return 0;
}
