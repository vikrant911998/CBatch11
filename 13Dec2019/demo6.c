#include<stdio.h>

int main(){
    float length,breadth,perimeter;

    printf("Enter the Length and breadth of Rectangle\n");
    scanf("%f%f",&length,&breadth);

    perimeter = 2*(length+breadth);


    printf("Perimeter of Rectangle is %f\n",perimeter);

    return 0;
}

// area = length*breadth