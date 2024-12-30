// structure is a user defined data-type. heterogeneous data structure.it is used to store different values in single variable name.
// syntax:
// struct structure_name{
//     return-type variable name; //data-member
//     return-type variablename; 
// };

#include<stdio.h>
union student{
    int rollno;  // data member
    char name[20];
    float marks;
}s1;  // s1 is structure variable
int main(){
 
   // struct  student s1;  // structure variable
   printf("Enter rollno:");
   scanf("%d",&s1.rollno);

    printf("Enter name:");
   scanf("%s",&s1.name);

    printf("Enter percent");
    scanf("%f",&s1.marks);

    printf("\n Student details");
    printf("\n Rollno=%d",s1.rollno);
    printf("\n Name=%s",s1.name);
    printf("\n Percent=%.2f",s1.marks);
}