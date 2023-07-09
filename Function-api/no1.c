// 1.	WAP to find sum of two numbers using function named sum().
#include <stdio.h>
void sum(int, int);
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter another number\n");
    scanf("%d", &b);
    printf("The sum is : ");
    sum(a, b);
}
void sum(int a, int b)
{
    int s;
    s = a + b;  
    printf("%d", s);
}
