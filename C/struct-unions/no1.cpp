// WAP to input id, name and grade for 10 students. Then print them. Use array of structure concept.
#include<stdio.h>
struct student{
    int id;
    char name[100];
    int grade;
}std_data[10];
int main(){
        printf("\n\nNo1");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    int i;
    for(i=0;i<3;i++){
        printf("Enter name of student\n");
        scanf("%s",std_data[i].name);
        printf("Enter %s's grade\n",std_data[i].name);
        scanf("%d",&std_data[i].grade);
        printf("Enter %s's id no\n",std_data[i].name);
        scanf("%d",&std_data[i].id);
    }  
    printf("Name\tGrade\tID\n");
    for(i=0;i<3;i++){
        printf("%s\t%d\t%d\n",std_data[i].name,std_data[i].grade,std_data[i].id);
    }
}
