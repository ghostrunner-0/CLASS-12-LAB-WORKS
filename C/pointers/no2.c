// WAP to know a number is even or odd using pointer
#include<stdio.h>
int main()
{
    int a;
    int *k;
    k=&a;
    printf("Enter a number\n");
    scanf("%d",&*k);
    (*k%2==0)?
    printf("The number is even"):
    printf("The number is odd");    
return 0;
}