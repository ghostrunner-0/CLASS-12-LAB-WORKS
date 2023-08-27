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
    printf("Enter ctrl+z to exit\n");
    while ((scanf("%d%s%f", &roll, name, &per)) != EOF)
    {
        fprintf(k, "%d\t%s\t%f\n", roll, name, per);
    }
    printf("\nwriting process completed\n");
    fclose(k);
    k = fopen("student.txt", "r");
    k1 = fopen("updatedata.txt", "w");
    printf("Enter student rollno to be deleted\n");
    scanf("%d", &searchid);
    while ((fscanf(k, "%d%s%f", &roll, name, &per)) != EOF)
    {
        if (searchid == roll)
        {
            flag = 1;
            printf("name=%s\t per=%f\n", name, per);
            printf("Press enter to delete\n");
            getch();
        }
        else
        {
            fprintf(k1, "%d\t%s\t%f", roll, name, per);
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
        printf("data deleted sucessfully\n");
    }
    getch();
    return 0;
}
