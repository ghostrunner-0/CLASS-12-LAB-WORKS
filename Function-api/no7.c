// 7.	Suppose a function void matrix_sum(int a[][],int b[][]).Here, we have passed array as parameter. Use this function to find sum of matrices.
#include <stdio.h>
int size;
void matrix_sum(int a[100][100], int b[100][100]);
int main()
{
    int i, j, a[100][100], b[100][100];
    printf("Enter size of array for rows and coumn\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("enter [%d][%d] element for first matrix\n ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("enter [%d][%d] element for second matrix\n ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    matrix_sum(a, b);
    return 0;
}

void matrix_sum(int c[100][100], int d[100][100])
{
    int i, j;
    printf("The sum is :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", c[i][j] + d[i][j]);
        }
        printf("\n");
    }
}
