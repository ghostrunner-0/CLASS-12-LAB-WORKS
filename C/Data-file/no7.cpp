//?7. WAP to show the concept of rename() and remove() functions.
#include<stdio.h>
#include<conio.h>
typedef int i;
typedef char c;
typedef FILE f;
int main()
{
    f *k;
    c name[100];
    i grade;
    c choice,choose,name2[100];
    k=fopen("file1.txt","a");
    do{
        printf("\nEnter your Name: ");
        scanf("%s",&name);
        printf("\nEnter Grade: ");
        scanf("%d",&grade);
        fprintf(k,"%s %d\n",name,grade);
        printf("Enter 'y' to continue\n");
        choice=getch();
    }while(choice== 'y'|| choice== 'Y');
    fclose(k);
    printf("Press d to delete the file OR");
    printf("Press r to rename the file\n");
    choose=getch();
    switch(choose){
        case ('d'):remove("file1.txt");
        break;
        case ('r'):printf("Rename file(with extension) to?: ");
        scanf("%s",name2);
        rename("file1.txt",name2);
        break;
        default:
        printf("Wrong choice\n");
    }
return 0;
}