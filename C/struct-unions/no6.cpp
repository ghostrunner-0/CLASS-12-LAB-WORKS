// WAP using function and structure to calculate sum of two distances measured in terms of kilometers and meters.
#include <stdio.h>
struct d
{
    int km;
    int m;
} s1,s2;
void calc(struct d s1,struct d s2);
main()
{
        printf("\n\nNo6");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    printf("Enter length in kilometer & meter\n");
    scanf("%d%d",&s1.km,&s1.m);
    printf("Enter another length in kilometer& meter\n");
    scanf("%d%d",&s2.km,&s2.m);
    calc(s1,s2);
}
void calc(struct d s1, struct d s2)
{
    int km,m;
    km=(s1.km+s2.km)+(s1.m+s2.m)/1000;
    m=(s1.m+s2.m)%1000;
    printf("Total length in Kilometers: %dkm\n",km);
    printf("Total length in meters %dm\n",m);
}