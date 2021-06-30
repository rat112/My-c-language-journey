#include<stdio.h>

int main(){
    int principal, rate, year;
    printf("Enter the value of principal \n");
    scanf("%d",&principal);

    printf("Enter the value of rate \n");
    scanf("%d",&rate);

    printf("Enter the value of year \n");
    scanf("%d",&year);

    int simpleinstrest=(principal * rate * year)/100;
    printf("The value of the simpleinstrest %d",simpleinstrest);
    
    return 0;
}