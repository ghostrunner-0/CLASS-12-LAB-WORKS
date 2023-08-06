// Use array to input 10 elements and print them. Use array as pointer.
#include <stdio.h>
int main()
{
    int a[10];
    int *k;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &a[i]);
    }
    k = a;
    printf("The scanned numbers are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", *(k + i));
    }
    return 0;
}