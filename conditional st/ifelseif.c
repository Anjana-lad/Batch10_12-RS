// if elseif ladder
/*
if(condition){
true part
}
else if(condition){
}
else if(condition){
}
else{
}
*/

// program to find greater from three numbers:
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter numbers;");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("A is greater");
    }
    else if(b>a && b>c){
        printf("B is greater");
    }
    else if(a==b && b==c && a==c){
        printf("All are same");
    }
    else{
        printf("C is greater.");
    }
}