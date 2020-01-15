#include<stdio.h>


typedef struct Employee{
    int id;
    char name[20];
    char address[50];
}Employee;


Employee Input();
void Output( Employee );


int main(){

    Employee e = Input();

    Output(e);

    return 0;
}



Employee Input(){
    Employee emp;

    printf("Enter the ID\n");
    scanf("%d",&emp.id);

    fflush(stdin);

    printf("Enter the Name\n");
    // scanf("%s",emp.name);
    gets(emp.name);

    printf("Enter the Address\n");
    // scanf("%s",emp.address);
    gets(emp.address);

    return emp;
}

void Output( Employee emp ){
    
    printf("Id = %d\n",emp.id);
    printf("Name = %s\n",emp.name);
    printf("Address = %s\n",emp.address);
}