#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int i,n;

    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello World");
    fclose(fp);

    fp = fopen("file.txt", "r");

    //?ftell() function returns the current position of the file pointer.
    printf("Current position of the file pointer: %ld\n", ftell(fp));

    //?fseek() function moves the file pointer to a specified position.
    fseek(fp, 3, SEEK_SET);
    printf("Current position of the file pointer after fseek(): %ld\n", ftell(fp));

    //?rewind() function moves the file pointer to the beginning of the file.
    rewind(fp);
    printf("Current position of the file pointer after rewind(): %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}