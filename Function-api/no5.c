// 5.	WAP to find sum of series 1,2,3,…..200 using function.
#include <stdio.h>
int sum();
int main()
{
    sum();
    printf("the sum is %d", sum());
}
int sum()
{
    int i, s = 0;
    for (i = 0; i <= 200; i++)
    {
        s = s + i;
    }
    return s;
}
