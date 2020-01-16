#include<stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
}Date;


void input(Date *date){
    
    printf("Enter the day, month and year\n");
    scanf("%d%d%d",&date->day ,&date->month ,&date->year);
}

void compare(Date d1, Date d2){
    
    if((d1.day == d2.day) && (d1.month == d2.month) && (d1.year == d2.year)){
        printf("Dates are Same\n");
    }
    else{
        printf("Dates are not Same\n");
    }
}


int main(){ 
    Date date1,date2;
    input(&date1);
    input(&date2);
    
    compare(date1,date2);


    return 0;
}
