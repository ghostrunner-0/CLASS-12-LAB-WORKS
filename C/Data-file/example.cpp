#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *k;                                                 //? A pointer is created with the data type FILE.
    char choice;
    k=fopen("text.xls","a");                                 //? FOPEN: Creates a file and sets the file mode.
    char name[100];
    int price;
    printf("Enter the following records\n");
    do{
        printf("Enter book name\n");
        scanf("%s",name);
        printf("Enter price\n");
        scanf("%d",&price);
        fprintf(k,"%s\t%d\n",name,price);                    //? fprintf writes the data in the file
        printf("if you want to contine press[y] or press any other other key\n");
        choice=getch();                                      //? getch scans the entered value.
    }while(choice =='Y'|| choice=='y');
    fclose(k);                                               //?Used for closing the file
    fopen("text.txt","r");
    do{
        printf("Book name= %s\t Price= %d\n",name,price);
    }while((fscanf(k,"%s\t%d\n",name,&price)!=EOF));         //? fscanf reads the data from the file.
    fclose(k);
return 0;
}
