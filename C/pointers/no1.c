// ?: WAP to perform arithmetic calculations (sum, difference, multiplication and division) of two numbers using pointers.
#include<stdio.h>
int main()
{
    int a,b;
    int *k,*j;
    k=&a;
    j=&b;
    printf("Enter two number\n");
    scanf("%d%d",&*k,&*j);
    printf("The sum of the numbers is: %d",*k+*j);
    printf("The difference of the numbers is: %d",*k-*j);
    printf("The product of the numbers is: %d",*k**j);
    printf("The division of the numbers is: %d",(*k)/(*j));
return 0;
}