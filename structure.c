#include <stdio.h>
 
typedef struct{
 
    char name[20];
    int age;
    int phone_number;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("age: ");
        scanf("%d",&employees[i].age);
        printf("phone_number: ");
        scanf("%d",&employees[i]. phone_number);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 

 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("phone_number \t: ");
        printf("%d \n",employees[i].phone_number);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
