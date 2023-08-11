#include<conio.h>
#include<stdio.h>
int main()
{
    FILE *k;
    char name[100];
    int id;
    char choice;
    k=fopen("test.txt","a");
    printf("Enter data\n");
    do
    {
        printf("Enter name\n");
        scanf("%s",name);
        printf("Enter id\n");
        scanf("%d",&id);
        fprintf(k,"%d\t%s\n",id,name);
        printf("If you want to continue click'y'\n");
        choice=getch();
    } while (choice =='y'|| choice=='Y');
    fclose(k);
    fopen("test.txt","r");
    int i=0;
    do{
        printf("ID=%d\tName=%s\n",id,name);
    }while((fscanf(k,"%d%s",&id,name))!=EOF);
    fclose(k);
return 0;
}