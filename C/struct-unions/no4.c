// WAP to input id, name and address of 20 students using struct. Then print them in sorted format on the basis of name.
#include<string.h>
#include<stdio.h>
struct std{
    int id;
    char name[100];
    char address[100];
}data[100],temp;
int main() {
    printf("\n\nNo4");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    int i,j;
    for(i=0;i<3;i++){
        printf("Enter Student's name\n");
        scanf("%s",data[i].name);
        printf("Enter %s's id\n",data[i].name);
        scanf("%d",&data[i].id);
        printf("Enter %s's address\n",data[i].name);
        scanf("%s",data[i].address); 
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(strcmp(data[i].name,data[j].name)>0){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("id: %d\tName: %s\tAddress: %s\n",data[i].id,data[i].name,data[i].address);
    }
return 0;
}