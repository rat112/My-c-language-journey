#include <stdio.h>

int main()
{
    int a = 5;
    // int b = 5.2; // this is recommend
    float b = 5.6;
    // char c = 'jfj'; // this is recommend
    char c = 'j';
    int d = 56;
    int e = 56 + 6;

    printf("this is a value of a %d \n", a);
    printf("this is a value of b %f \n", b);
    printf("this is a value of c %c \n", c);
    printf("sum of a and d is %d \n", a+d);
    printf("subtraction of a and d is %d \n",a-d);
    printf("multication of a and d is %d \n", a*d);
    printf("div of a and d is %f \n", a/d);
    printf("this is value of e %d \n", e);
    return 0;
}