// WAP to input students' name, grade and marks in five subjects. Then store these all data with total and percentage in a data file
// "student.dat". Print all those data of students who have percentage >=80. You may use fprintf() or fwrite().
#include <stdio.h>
#include <conio.h>
typedef char c;
typedef int i;
typedef float f;
struct student
{
    c name[100];
    i grade;
    f sub1,sub2,sub3,sub4,sub5,sum,per;
} s;
int main()
{
    FILE *k;
    k=fopen("student.dat","a");
    for(int i=0;i<2;i++){
        printf("\nEnter the details of %d Student \n",i+1);
        printf("Name:");
        scanf("%s",s.name);
        printf("Grade: ");
        scanf("%d",&s.grade);
        printf("Enter Marks in 5 subjects: ");
        scanf("%f%f%f%f%f",&s.sub1,&s.sub2,&s.sub3,&s.sub4,&s.sub5);
        s.sum=s.sub1+s.sub2+s.sub3+s.sub4+s.sub5;
        s.per=s.sum/5;
        fwrite(&s,sizeof(s),1,k);
    }
    fclose(k);
    k=fopen("student.dat","r");
    printf("The students with percentage equal to or more than 80:\n");
    while ((fread(&s,sizeof(s),1,k))!=EOF)
    {
        if(s.per>=80){
            printf("name: ");
            printf("%s ",s.name );
            printf("grade:%d \t percentage:%f%\n",s.grade ,s.per);
        }
    }
    return 0;
}