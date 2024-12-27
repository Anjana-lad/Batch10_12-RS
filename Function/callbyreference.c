// call by references.
#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n After swapping the value:\n a=%d \t b=%d",*a,*b);
}
int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    printf("\n Before calling the function\n a=%d \t b=%d",a,b);
    swap(&a,&b);   // calling function.
    printf("\n After calling function \n a=%d \t b=%d",a,b);
}