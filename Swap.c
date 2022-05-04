#include<stdio.h>

int main(){
    int num1 , num2;
    int *a,*b;
    a = &num1;
    b = &num2;

    printf("Enter number one: ");
    scanf("%d",&num1);
    printf("Enter number two: ");
    scanf("%d",&num2);

    printf("Before Swapping: num1=%d, num2=%d\n",*a,*b);
    printf("Adress before swaping of num1 %u\n");

    int t;
    t=num1;
    num1=num2;
    num2=t;
    a = &num1;
    b = &num2;
    printf("After Swapping: num1=%d, num2=%d\n",*a,*b);
    printf("Adress before swapping of num1 %u\n and num2 %u\n",a,b);
    return 0;
}