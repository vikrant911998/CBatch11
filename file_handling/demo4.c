#include<stdio.h>



typedef struct Marks{
    int rollno;
    char name[20];
    int maths_marks;
    int chem_marks;
    int phy_marks;
}Marks;


Marks userInput(){
    Marks m1;
    printf("Enter the Roll No\n");
    scanf("%d",&m1.rollno);

    printf("Enter the Name\n");
    scanf("%s",m1.name);

    printf("Enter the Maths Marks\n");
    scanf("%d",&m1.maths_marks);

    printf("Enter the Physics Marks\n");
    scanf("%d",&m1.phy_marks);

    printf("Enter the Chemistry Marks\n");
    scanf("%d",&m1.chem_marks);

    return m1;
}

void Percentage(Marks m){
    double percent = ((m.maths_marks+m.chem_marks+m.phy_marks)*100)/300;

    printf("Roll No = %d\n",m.rollno);
    printf("Name = %s\n",m.name);
    printf("Percentage = %lf\n",percent);
}

int main(){
    Marks m = userInput();
    Percentage(m);

    return 0;
}