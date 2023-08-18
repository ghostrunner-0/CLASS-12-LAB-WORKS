// WAP to store some ‘n’ natural numbers in a data file and print them on screen. Use getw() function. Also print their average.
#include <stdio.h>
int main()
{
    int n, i, num;
    float avg, sum = 0;
    FILE *fp;
    printf("Enter the number of natural numbers to store: ");
    scanf("%d", &n);
    fp = fopen("numbers.txt", "w");
    printf("Enter %d natural numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        putw(num, fp);
        sum += num;
    }
    fclose(fp);
    fp = fopen("numbers.txt", "r");
    printf("The numbers in the file are: \n");
    while ((num = getw(fp)) != EOF)
    {
        printf("%d ", num);
    }
    printf("\n");
    fclose(fp);
    avg = (float)sum / n;
    printf("The average of the numbers is: %.2f\n", avg);
    return 0;
}
