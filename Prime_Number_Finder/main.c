#include <stdio.h>

int isPrime(int n);

int main()
{
    int num1, num2;

    printf("Enter First Number : ");

    scanf("%d", &num1);

    printf("Enter Second Number : ");

    scanf("%d", &num2);

    printf("The Prime Numbers Between %d And %d Are : ", num1, num2);
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}