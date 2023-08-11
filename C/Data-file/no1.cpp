//WAP to input a sentence and store data in a data file “file.txt”. And print them on screen. Use getc() and putc() functions.
#include <stdio.h>
int main() {
	printf("\n\n\tAUthor://Jo-ya//\n\n");
    FILE *file;   
    int i;
    char sentence[100];
    char ch;
    printf("Enter your sentence: ");
    gets(sentence);                 
    file = fopen("file.txt", "a");//you can use "w" for writing here(jo-ya). 
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    for (i = 0; sentence[i] != '\0'; i++) {
        putc(sentence[i], file);
    }
    fclose(file);
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Data stored in the is file:\n");
    while ((ch = getc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}