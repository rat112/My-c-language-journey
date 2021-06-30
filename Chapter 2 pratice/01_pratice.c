#include<stdio.h>

int main(){
    // int a; b = a; This is worng
    // int a; int b = a; //This is right 
    // int v = 3^3; // This is valid 
    
    //This is worng
    // char dt = '23';
    // printf("%d",dt); //This is worng

    // right way
    // char dt = 'k';
    
    // q no. 3 Write a program to determine wether a number is divible by 97 or not
    // int num;
    // printf("Enter the number\n");
    // scanf("%d", &num);
    // printf("divisibility test resturns: %d\n", num%97);
    
    // Q no. 4 step by step evaluation of 3*x/y-z+k
    int x = 2, y = 3,z = 3, k = 1;
    int result = 3*x/y-z+k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 0
    printf("The value of result is %d", result);
    return 0;
}