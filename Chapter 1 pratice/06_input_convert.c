#include<stdio.h>

int main(){
    int celsius;
    printf("Enter your value of celsius \n");
    scanf("%d",&celsius);
    float far;
    far = (celsius * 9/5) + 32;
    printf("The value of the celsius to fahrenheit %f\n", far);
    return 0;
}