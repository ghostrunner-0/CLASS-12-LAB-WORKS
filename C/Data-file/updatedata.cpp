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
    float per;
    k = fopen("student.txt", "a");
    printf("Enter ctrl+z to exit");
    while ((scanf("%d%s%f", &roll, name, &per)) != EOF)
    {
        fprintf(k, "%d\t%s\t%f\n", roll, name, per);
    }
    printf("\nwriting process completed\n");
    fclose(k);
    k = fopen("student.txt", "r");
    k1 = fopen("updatedata.txt", "w");
    printf("Enter student rollno to be updated\n");
    scanf("%d", &searchid);
    while ((fscanf(k, "%d%s%f", &roll, name, &per)) != EOF)
    {
        if (searchid == roll)
        {
            flag = 1;
            printf("name=%s\t per=%f\n", name, per);
            printf("enter rollno\n");
            scanf("%d", &roll);
            printf("Enter name");
            scanf("%s", name);
            printf("enter percentage\n");
            scanf("%f", &per);
            fprintf(k1, "%d\t%s\t%f\n", roll, name, per);
        }
        else
        {
            fprintf(k1, "%d\t%s\t%f\n", roll, name, per);
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
