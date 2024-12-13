// logical operators : AND (&&) , OR (||),NOT (!)
/*
    A  B  a&&b  A||B   !A
    0  1    0   1       1
    1  0    0   1       0
    0  0    0   0       1
    1   1   1   1       0
*/

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);

    int res=((num1>=num2) && (num1>=0));
    printf("Logical AND=%d",res);

     res=((num1>=50) ||(num2>=10) );
    printf("\n Logical OR=%d",res);

    res=((num1!=num2));
    printf("\n Logical NOT=%d",res);
}