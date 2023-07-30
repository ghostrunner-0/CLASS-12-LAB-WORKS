// WAP to input 20 employees name, position and salary.
//  Then search a record of an employee and its position on the basis of name.
#include <stdio.h>
#include <string.h>
struct employee
{
    int salary;
    char name[100];
    int post[100];
} data[100];
main()
{
    printf("\n\nNo2");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    int i;
    char temp[100];
    for (i = 0; i < 2; i++)
    {
        printf("Enter employees's name\n");
        scanf("%s", data[i].name);
        printf("Enter %s's post\n", data[i].name);
        scanf("%s", data[i].post);
        printf("Enter %s's salary\n", data[i].name);
        scanf("%d", &data[i].salary);
    }
    printf("Enter the name to search\n");
    scanf("%s", temp);
    for (i = 0; i < 2; i++)
    {
        if (strcmp(temp, data[i].name) == 0)
        {
            // printf("The name %s is found in %d location",data[i].name,i+1);
            printf("Name: %s\tpost: %s\tsalary: %d\n", data[i].name, data[i].post, data[i].salary);
            break;
        }
    }
}
