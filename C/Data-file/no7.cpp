#include <stdio.h>
#include <conio.h>
typedef int i;
typedef char c;
typedef FILE f;
int main()
{
    f *k, *k1;
    c name[100], choice;
    i roll, searchid, flag = 0;
    k = fopen("student.txt", "a");
    printf("Enter ctrl+z to exit");
    while ((scanf("%d%s", &roll, name)) != EOF)
    {
        fprintf(k, "%d\t%s\t\n", roll, name);
    }
    printf("\nwriting process completed\n");
    fclose(k);
    k = fopen("student.txt", "r");
    k1 = fopen("updatedata.txt", "w");
    printf("Enter student rollno to be updated\n");
    scanf("%d", &searchid);
    while ((fscanf(k, "%d%s", &roll, name)) != EOF)
    {
        if (searchid == roll)
        {
            flag = 1;
            printf("name=%s\t per=%f\n", name);
            printf("enter rollno\n");
            scanf("%d", &roll);
            printf("Enter name");
            scanf("%s", name);
            fprintf(k1, "%d\t%s\n", roll, name);
        }
        else
        {
            fprintf(k1, "%d\t%s\n", roll, name);
        }
    }
    fclose(k);
    fclose(k1);
    remove("student.txt");
    rename("updatedata.txt", "student.txt");
    if (flag == 0)
    {
        printf("no data found to be edited\n");
    }
    else
    {
        printf("data updated sucessfully\n");
    }
    getch();
    return 0;
}
