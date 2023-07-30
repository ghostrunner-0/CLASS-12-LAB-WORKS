// 4.	WAP to know a number is prime or composite using function.
#include <stdio.h>
void prime_con(int);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    prime_con(a);
}

void prime_con(int a)
{
    int i, prime = 1;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("The number is a prime number\n");
    }
    else
        printf("The number is a composite number\n");
}
