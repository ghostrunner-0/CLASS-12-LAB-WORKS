// 3.	WAP to print the greatest value among three numbers using a function int great().
// We have to use return statement.
#include <stdio.h>
int great(int, int, int);
int main()
{
    int a, b, c, result;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    result = great(a, b, c);
    printf("The greatest number is : %d", result);
}

int great(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
