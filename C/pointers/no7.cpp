// WAP to sort 10 numbers stored in an array using pointer.
#include <stdio.h>
int main()
{
    typedef int i;
    i *k;
    i a[10],j,l,temp;
    for(j=0;j<10;j++){
        printf("Enter %d number\n",j+1);
        scanf("%d",&a[j]);
    }
    k=a;
    for(l=0;l<10;l++){
        for(j=0;j<10;j++){
            if(a[l]<a[j]){
                temp=a[l];
                a[l]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted numbers\n");
    for(l=0;l<10;l++){
        printf("%d\n",*(k+l));
    }
    return 0;
}