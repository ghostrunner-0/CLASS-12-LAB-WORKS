//  WAP to store book’s name, edition and price in a data file “book.txt” using yes/no options.
//  It means the computer stores data until you say ‘n’. Then print them on screen.
#include<stdio.h>
#include<conio.h>
    typedef char c;
    typedef int i;
    typedef FILE f;
int main()
{
    f *k;
    c name[100];
    i edition,price;
    k=fopen("book.txt","a");
    c choice='y';
    while(choice!='n' || choice=='y' || choice=='Y'){
        printf("Enter book name\n");
        scanf("%s",name);
        printf("Enter the edition number\n");
        scanf("%d",&edition);
        printf("Enter price\n");
        scanf("%d",&price);
        fprintf(k,"%s\t%d\t%d\n",name,edition,price);
        printf("Enter 'y' to continue & 'n' to exit\n");
        choice=getch();
    }
    fclose(k);
    k=fopen("book.txt","r");
    printf("The records are\n");
    while((fscanf(k,"%s%d%d",name,&edition,&price))!=EOF){
        printf("Name=%s\tEdition=%d\tPrice=%d\n",name,edition,price);
    }
return 0;
}