// 6.	WAP to input elements of an array and print them with their sum. Suppose, the array is one dimensional and is 
// of void type and  function to be used is array_elements().
#include<stdio.h>
void array_elements(int b[100]);
int size;
int main()
{
    int a[100];
    int i;
    printf("Enter size of array\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter [%d] element\n",i+1);
        scanf("%d",&a[i]);
    }
    array_elements(a);
}

void array_elements(int b[100]){
    int s=0;
    for(int i=0;i<size;i++){
        s=s+b[i];
    }
    printf("The sum of the arrays are:%d\n",s);
}