#include<stdio.h>

typedef struct Customer{
    int accNo;
    char name[20];
    int balance;
}Customer;

void input(Customer *customer){
    printf("Enter the Customer Name\n");
    scanf("%s",customer->name);

    printf("Enter the Customer Account Number\n");
    scanf("%d",&customer->accNo);

    printf("Enter the Customer Account Balance\n");
    scanf("%d",&customer->balance);
}

void output(Customer *customer){

    printf("Name = %s\n",customer->name);
    printf("Account Number = %d\n",customer->accNo);
    printf("Account Balance = %d\n",customer->balance);

}

void printName(Customer *customer){
    printf("Name = %s\n",customer->name);

}

void printBalance(Customer *customer){
    printf("Balance = %d\n",customer->balance);

}

void checkBalance(Customer a[]){
    int i=0;

    for(i=0 ; i<3 ; i++){
        
        if( a[i].balance < 200 ){
            printName( &a[i] );
        }

    }

}

void addBalance(Customer a[]){

    int i=0;

    for(i=0 ; i<3 ; i++){
        
        if( a[i].balance > 1000 ){
            
            a[i].balance = a[i].balance + 100;

            printBalance( &a[i] );
        }

    }

}


int main(){
    int i=0;
    Customer arr[3];
    Customer c;

    for( i=0 ; i<3 ; i++ ){
        input(&c);
        arr[i] = c ;
    }

    checkBalance(arr);

    addBalance(arr);

    return 0;
}