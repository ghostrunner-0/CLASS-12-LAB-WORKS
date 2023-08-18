// WAP to input a sentence and store data in a data file “file.txt”. And print them on screen. Use getc() and putc() functions.
#include <stdio.h>
int main()
{
    FILE *k;
    char ch;
    k=fopen("file.txt","a");
    printf("Enter a line & Ctrl+z to exit\n");
    while((ch=getchar())!=EOF)
    putc(ch,k);
    fclose(k);
    k=fopen("file.txt","r");
    printf("The line you entered is:\n");
    while((ch=getc(k))!=EOF)
    putchar(ch);
    fclose(k);
    return 0;
}