// factorial ;6!=6*5*4*3*2*1=720;
#include<stdio.h>
int main(){
    int num,i,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    // for(i=num;i>=1;i--){
            for(i=1;i<=num;i++){
         fact=fact*i;
         // printf(" factorial=%d",fact);
    }
    printf(" factorial=%d",fact);
}