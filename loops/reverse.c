// reverse a number;
#include<stdio.h>
int main(){
    int num,rev=0,rem,original_num;
    printf("Enter number:");
    scanf("%d",&num);
    original_num=num;
    while(num>0){
        rem=num%10;
        num/=10;
        rev=rev*10+rem;
    }
    printf("Reverse number=%d\n",rev);

    if(rev==original_num){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not a Palindrome");
    }
}