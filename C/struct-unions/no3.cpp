// We have two structures as given below. struct employee { char ename[100]; char eaddress[100]; }; struct salarydetails { char pos[100];
//  float salary; struct employee detail; }payinfo; WAP to input employees’ details with salary then print them. Use nested struct concept.
#include<stdio.h>
struct employee{
    char ename[100];
    char eaddress[100];
};
struct salarydetails{
    char pos[100];
    float salary;
    struct employee detail;
}payinfo[100];
int main(){
        printf("\n\nNo3");
    printf("\n\n\tAUthor://GHOSTRUNNER//\n\n");
    int i; 
    int size;
    printf("Enter numbers of employees\n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter employee's name\n");
        scanf("%s",payinfo[i].detail.ename);
        printf("Enter %s's address\n",payinfo[i].detail.ename);
        scanf("%s",payinfo[i].detail.eaddress);
        printf("Enter %s's post\n",payinfo[i].detail.ename);
        scanf("%s",payinfo[i].pos);
        printf("Enter %s's salary\n",payinfo[i].detail.ename);
        scanf("%f",&payinfo[i].salary);
    }
    for(i=0;i<size;i++){
        printf("Name: %s\nAddress: %s\nPost: %s\nSaLARY: %0.2f\n",payinfo[i].detail.ename,payinfo[i].detail.eaddress,payinfo[i].pos,payinfo[i].salary);
    }
}