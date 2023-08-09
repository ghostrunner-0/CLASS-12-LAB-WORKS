
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_val(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap(call by reference): a = %d, b = %d\n", a, b);
    swap_val(a, b);
    printf("After swap(call by value): a = %d, b = %d\n", a, b);
    return 0;
}
