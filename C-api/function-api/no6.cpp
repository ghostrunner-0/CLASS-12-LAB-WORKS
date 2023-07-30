// 6.	WAP to input elements of an array and print them with their sum. Suppose, the array is one dimensional and is 
// of void type and  function to be used is array_elements().
#include <stdio.h>
void array_elements(int[], int);
int main()
{
    int n, i, arr[100];
    printf("Enter the size of the array: ");
    scanf(" %d ", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf(" %d ", &arr[i]);
    array_elements(arr, n);
    return 0;
}
void array_elements(int arr[], int n)
{
    int sum = 0;
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of the elements of the array is: %d ", sum);
}

