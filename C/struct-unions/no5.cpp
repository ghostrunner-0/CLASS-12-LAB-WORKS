// WAP to input any 10 teacher’s id, name and subject using ‘typedef’ and structure. Then print them on screen.
#include<stdio.h>
    typedef int id;
    typedef char name, subject;
struct teach{
    id a;
    name n[100];
    subject sub[100];
}data[100];
main(){
        printf("\n\nNo5");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    int i;
    for(i=0;i<2;i++){
        printf("Enter teacher's name\n");
        scanf("%s",data[i].n);
        printf("Enter %s`s id\n",data[i].n);
        scanf("%d",&data[i].a);
        printf("Enter the subject %s teaches\n",data[i].n);
        scanf("%s",data[i].sub);
    }
    for(i=0;i<2;i++){
        printf("ID: %d  Name: %s  Subject: %s\n",data[i].a,data[i].n,data[i].sub);
    }
}