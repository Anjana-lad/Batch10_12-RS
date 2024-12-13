// others operator : sizeof(),?: ,*,&,,
// #include<stdio.h>
// int main(){
//     int num;
//     float salary;
//     double percent;
//     char ch;
//     long double height;

//     printf("\n Size of integer: %d",sizeof(num));
//     printf("\n Size of float: %d",sizeof(salary));
//     printf("\n Size of double: %d",sizeof(percent));
//     printf("\n Size of character: %d",sizeof(ch));
//     printf("\n Size of long double: %d",sizeof(height));

// }

// ?: ternary operator
// (a>b)?true part : false part

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    (num1>=num2)? printf("Num1 is greater."):printf("Num2 is greater");
}