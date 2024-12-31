// nested structure : structure inside structure.
// structure is used to store different  data-types of values in a single variable name; 

#include<stdio.h>
struct employee{
    int emp_id;
    char name[20];
    float salary;

    struct department{  // inner structure
        int dep_id;
        char dep_name[20];
    }dept;   // variable name for inner structure
};
int main(){
    struct employee emp[2];  // structure variable 
   int i;
   for(i=0;i<2;i++){
    printf("Enter emp_id:");
    scanf("%d",&emp[i].emp_id);
    printf("Enter name:");
    scanf("%s",&emp[i].name);
    printf("Enter salary:");
    scanf("%f",&emp[i].salary);
   printf("Enter department id:");
   scanf("%d",&emp[i].dept.dep_id);
   printf("Enter department_name:");
   scanf("%s",&emp[i].dept.dep_name);
   }

   printf("\n Employee Details:\n");
   for(i=0;i<2;i++){
    printf("\nEmp_id=%d",emp[i].emp_id);
    printf("\nName=%s",emp[i].name);
    printf("\nSalary=%.2f",emp[i].salary);
    printf("\nDepartment id=%d",emp[i].dept.dep_id);
    printf("\nDepartment name=%s",emp[i].dept.dep_name);
   }
}