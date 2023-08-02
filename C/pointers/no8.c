// WAP to print multiplication table of a number using pointer.
#include<stdio.h>
int main()
{
    int a;
    int *k;
    k=&a;
    printf("Enter a number\n");
    scanf("%d",&*k);
    int i;
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",*k,i,i**k);
    }
return 0;
}