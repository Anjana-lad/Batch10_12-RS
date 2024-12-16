// nested if ; if inside if 
/* syntax:
if(condition){
    if(condition){
    }
    else{
    }
}
else{
    if(condition){
    }
    else{
    }
}
*/

// program to find weather male or female is eligible for marriage or not.
#include<stdio.h>
int main(){
    char ch;
    int age;
    printf("Enter your choice:\n m for male \n f for female:");
    scanf("%c",&ch);

    if(ch=='m' || ch=='M'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=21){
            printf("Male is eligible for marriage");
        }
        else{
            printf("male Not eligible for marriage");
        }
    }
    else if(ch=='f'|| ch=='F'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=18){
            printf("Female is eligible for marriage");
        }
        else{
            printf("Not eligible for marriage");
        }
    }
    else{
        printf("Invalid choice");
    }
}