#include<stdio.h>

int main(){
    int Length, Breadth;
    printf("Enter your length\n");
    scanf("%d",&Length);
    printf("Enter your breadth\n");
    scanf("%d",&Breadth);
    int area = Length * Breadth;
    printf("Your area of rectangle is %d\n",area);
    return 0;
}