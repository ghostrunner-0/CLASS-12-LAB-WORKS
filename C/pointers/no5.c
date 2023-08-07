//? WAP to input 10 elements and print maximum and minimum value. Use array as pointer.
#include <stdio.h>
int main()
{
    int a[10];
    int h,l;
    for(int i=0;i<10;i++){
        printf("Enter %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    h=*(a+0);
    l=*(a+0);
    for(int i=0;i<10;i++){
        if(l>*(a+i))
        l=*(a+i);
        if(h<*(a+i))
        h=*(a+i);
    }

    printf("The minimum value is %d\n",l);
    printf("The maximum value is %d",h);
    return 0;
}