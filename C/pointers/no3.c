// WAP to find sum and average of ‘n’ natural numbers using pointer.
#include <stdio.h>
int main()
{
    int n,a[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *k;
    for(int i=0;i<n;i++){
        printf("Enter %d element\n",i+1);
        scanf("%d",(a+i));
    }
    k=a;
    float sum, avg;
    for(int i=0;i<n;i++){
    sum=sum+*(k+i);
    }
    avg=sum/n;
    printf("The sum is %0.2f\n",sum);
    printf("The average is %0.2f\n",avg);
    return 0;
}