// 5. WAP to store employee’s name, designation and salary in a data file “employee.txt” using fwrite().
// The computer stores data until you say ‘n’. Then read the contents of that file and print on screen using fread().
#include <conio.h>
#include <stdio.h>
typedef char c;
typedef int i;
typedef FILE f;
struct employee
{
    c name[100];
    c designation[100];
    i salary; //? Fun Fact: The daa type integar takes 4 bytes memory space;
}data;
int main()
{
    f *k;
    c choice;
    k = fopen("employee.txt", "a");
    do
    {
        printf("Enter name of employee\n");
        scanf("%s", data.name);
        printf("Enter employee's designation\n");
        scanf("%s", data.designation);
        printf("Enter employee's salary\n");
        scanf("%d", &data.salary);
        fwrite(&data, sizeof(data), 1, k); //? The total size of k is 204 bytes.
        printf("Press 'n' to exit\n");
        choice = getch();
    } while (choice != 'n');
    fclose(k);
    k = fopen("employee.txt", "r");
    while (fread(&data, sizeof(data), 1, k) != '\0')
    {
        printf("Name=%s\tDesignation=%s\tSalary=%d\n", data.name, data.designation, data.salary);
    }
    return 0;
}