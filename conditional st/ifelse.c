// if else statements:
/* syntax:
if(condition){
// true part
}
else{
// false part
}
*/

// program to check where number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("number is odd");
    }
}