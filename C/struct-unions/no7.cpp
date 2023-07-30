// WAP to input student id, name and grade and print them. Use union concept
#include <stdio.h>
union d
{
    int id;
    char name[100];
    int grade;
} s;
main()
{
    printf("\n\nNo7");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    printf("Enter student id\n");
    scanf("%d", &s.id);
    printf("Student id is %d\n", s.id);
    printf("Enter student's name\n");
    scanf("%s", s.name);
    printf("Name is : %s\n", s.name);
    printf("Enter %s's grade\n", s.name);
    scanf("%d", &s.grade);
    printf("Student's grade is %d", s.grade);
    return 0;
}