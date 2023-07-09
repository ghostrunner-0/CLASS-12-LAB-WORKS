// 1.	WAP to find factorial value of a number using recursive function.
#include<stdio.h>
int fac(int n);
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
fac(n);
printf("The factorial of %d is %d",n,fac(n));
}

int fac(int n){
    if(n>=1)
    return n*fac(n-1);
    else
    return 1;
}