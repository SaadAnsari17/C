/*  Programs on functions. Write a Switch Case having menu for options: 1|Find out
maximum and minimum of some values using function (Take the size of array from user
then ask for numbers in that array find minimum and maximum number from that set of
array numbers) 2]Check perfect numbers using the function (Perfect number, a positive
integer that is equal to the sum of its proper divisors. Eg. 6 is divisible by 1,2 and 3 if you add
1+2+3-6 and therefore 6 is a perfect number) 3]Find the Factorial of any number using the
function. 4]Fibonacci Scries using Recursion function */

#include <stdio.h>
// Fibonacci function
int choice;

void fibo(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d", n3);
        fibo(n - 1);
    }
}

// Factorial function

void Fact(int n)
{
    int i, fact = 1;
    if (n < 0)
        printf("Error! Factorial of negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d =%d", n, fact);
    }
}

// Perfect number

void perfect(int n)
{
    int i = 1, sum = 0;
    while (i < n)
    {
        if (n % i == 0)
            sum = sum + i;
        i++;
    }
    if (sum = n)
        printf("%d is a perfect number.", i);
    else
        printf("%d is not a perfect number.", i);
}

// Find max and min

int maxmin(int a[], int n)
{
    int min, max, i;
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("Minimum number is %d", min);
    printf("\n Maximum number is %d", max);

    
}
int main()
{
    printf("press 1 to find out maximum and minimum of some values.\n");
    printf("press 2 to check perfect numbers.\n");
    printf("press 3 to Find the Factorial of any number.\n");
    printf("press 4 to Find the Fibonacci Series of a number.\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int a[1000], n, i;
        printf("Enter size of the array:");
        scanf("%d", &n);
        printf("Enter elemennts in array :");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        maxmin(a, n);
        break;
    }

    case 2:
    {
        int n;
        printf("Enter a number:");
        scanf("%d", &n);
        perfect(n);
        break;
    }

    case 3:
    {
        int n;
        printf("Enter an integer:");
        scanf("%d", &n);
        Fact(n);
        break;
    }

    case 4:
    {
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        printf("Fibonacci Series:");
        printf("%d %d", 0, 1);
        fibo(n - 2);
        break;
    }

    default:
        printf("Wrong Input\n");
    }
}

