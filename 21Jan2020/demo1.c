#include<stdio.h>


typedef struct Height{
    int feet;
    int inches;
}Height;

void input(Height *h){
    printf("Enter the Feets\n");
    scanf("%d",&h->feet);

    printf("Enter the Inches\n");
    scanf("%d",&h->inches);
}

void output(Height *h){
    printf("Maximum Height is %d feet and %d inches\n",h->feet,h->inches);
}

int calculateHeight(Height *h){

    int total = (h->feet*12)+h->inches;

    return total;
}

void checkMaximumHeight(Height arr[]){
    int i=0, max= 0;
    max = calculateHeight(&arr[0]);
    Height *temp = &arr[0];

    for(i=1 ; i<5 ; i++){
        
        if(max < calculateHeight(&arr[i])){
            max = calculateHeight(&arr[i]);
            temp = &arr[i];
        }
    }

    
    output(temp);
}   

int main(){
    Height a[5];
    Height h;
    int i=0;

    for(i=0 ; i<5 ; i++){
        input(&h);
        a[i] = h;
    }

    checkMaximumHeight(a);

    return 0;
}