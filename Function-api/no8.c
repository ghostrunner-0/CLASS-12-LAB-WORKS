
// 8.	WAP to sort ‘n’ number of strings using function. Pass strings as parameter.#include<string.h>
#include <stdio.h>
#include <string.h>
int n;
void string(char a[][100]);
int main()
{
    printf("Enter number of strings to sort\n");
    scanf("%d", &n);
    char a[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter [%d] string\n", i + 1);
        scanf("%s", a[i]);
    }
    string(a);
}
void string(char c[][100])
{
    printf("The sorted string is :\n");
    int i, j;
    char temp[100];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(c[i], c[j]) > 0)
            {
                strcpy(temp, c[i]);
                strcpy(c[i], c[j]);
                strcpy(c[j], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s ", c[i]);
    }
}
