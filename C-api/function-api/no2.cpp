// 2.	WAP to know a number is even or odd using function named evenodd().
#include <stdio.h>
void evenodd(int);
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    evenodd(a);
    return 0;
}
void evenodd(int a)
{
    if (a % 2 == 0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
}
