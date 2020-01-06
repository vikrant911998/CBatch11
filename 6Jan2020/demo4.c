#include<stdio.h>
float convert(float);


int main(){
    float celcius,fahrenheit=0;

    printf("Enter the Temperature in celcius\n");
    scanf("%f",&celcius);

    fahrenheit = convert(celcius);

    printf("Temperature in Celcius = %f\n",celcius);
    printf("Temperature in Fahrenheit = %f\n",fahrenheit);

    return 0;
}


float convert(float c){
    float f = ((c*9)/5)+32;
    return f;
}