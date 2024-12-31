// structure is a user defined data-type. heterogeneous data structure.it is used to store different values in single variable name.
// syntax:
// struct structure_name{
//     return-type variable name; //data-member
//     return-type variablename; 
// };

#include<stdio.h>
union student{
    int roll_no;  // data member
    char name[20];
    float marks;
}s1;  // s1 is structure variable
int main(){
 
   // struct  student s1;  // structure variable
   printf("Enter roll_no:");
   scanf("%d",&s1.roll_no);

    printf("Enter name:");
   scanf("%s",&s1.name);

    printf("Enter percent");
    scanf("%f",&s1.marks);

    printf("\n Student details");
    printf("\n Roll_no=%d",s1.roll_no);
    printf("\n Name=%s",s1.name);
    printf("\n Percent=%.2f",s1.marks);
}