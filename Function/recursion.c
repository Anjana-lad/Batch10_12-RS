// recursion :- means function calling itself.
// program to find the sum of n naturals numbers;
// #include<stdio.h>
// int sum(int n){
//     if(n>0){
//         n=n+sum(n-1);
//         return n;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     printf("Enter numbers to get the sum:");
//     scanf("%d",&num);
//     printf("Sum of naturals number=%d",sum(num));
// }

// factorial of a given number.
#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        n*=fact(n-1);// n=n*fact(n-1);
        n=30;
        
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Factorial=%d",fact(num));
}