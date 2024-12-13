// bitwise operator : &,|,^,<<,>>,~;
// ~num= -(num+1);
/*
    A   B   A^B
    0   0   0
    1   1   0
    1   0   1
    0   1   1
*/

#include<stdio.h>
int main(){
    int num1=7,num2=5;
    printf("num1=%d \n Num2=%d",num1,num2);
    printf("\n Bitwise AND =%d",(num1 & num2));
    printf("\n Bitwise OR =%d",(num1 | num2));
    printf("\n Bitwise XOR =%d",(num1 ^ num2));
    printf("\n negation of num1=%d",~num1);
}