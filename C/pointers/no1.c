// ?: WAP to perform arithmetic calculations (sum, difference, multiplication and division) of two numbers using pointers.
#include<stdio.h>
int main()
{
    float a,b;
    float *k,*j;
    k=&a;
    j=&b;
    printf("Enter two number\n");
    scanf("%f%f",&*k,&*j);
    printf("The sum of the numbers is: %0.f\n",*k+*j);
    printf("The difference of the numbers is: %0.f\n",*k-*j);
    printf("The product of the numbers is: %0.f\n",*k**j);
    printf("The division of the numbers is: %0.2f\n",(*k)/(*j));
return 0;
}