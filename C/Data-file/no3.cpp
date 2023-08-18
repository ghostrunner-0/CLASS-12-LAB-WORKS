// 3. WAP to store student’s name and address in a data file “student.txt”. Use fprintf() function.
// Then read contents of data file and print them on screen. Use fscanf() function.
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *k;
    char name[100];
    char address[100],choice;
    k=fopen("student.txt","a");
    do{
        printf("Enter student's name\n");
        scanf("%s",name);
        printf("Enter %s's address\n",name);
        scanf("%s",address);
        fprintf(k,"%s\t%s\n",name,address);
        printf("Enter 'y' to continue\n");
        choice=getch();
    }while(choice =='y'|| choice == 'Y');
    fclose(k);
    k=fopen("student.txt","r");
    while((fscanf(k,"%s%s",name,address))!=EOF){
        printf("Name=%s\tAddress=%s\n",name,address);
    }
    return 0;
}