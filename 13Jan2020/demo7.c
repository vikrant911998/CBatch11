#include<stdio.h>


struct Student{
    int roll_no;
    char name[20];
}s={103,"Rahul"};



int main(){
    
    struct Student s1,s2={101,"RAM"};
    // s1 = {102,"Vikrant"}; ->Error

    s1.roll_no = 102;
    // s1.name = "Vikrant";

    return 0;
}

