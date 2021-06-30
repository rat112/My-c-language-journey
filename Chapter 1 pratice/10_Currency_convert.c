#include<stdio.h>

int main(){
    int rupees;

    printf("Enter your rupees\n");
    scanf("%d",&rupees);

    float dollar=0.014;
    float currency;
    currency = rupees*dollar;

    printf("Your total currency %f\n",currency);

    return 0;
}