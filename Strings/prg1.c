// string to find digit,uppercase lowercase
#include<stdio.h>
int main(){
    char str[50];
    int u_case=0,l_case=0,digit=0;
    printf("Enter string:");
    gets(str);

    if((str >= 'A')||(str <= 'Z')){
        u_case++;
    }
    else if((str>= 'a')||(str<='z')){
        l_case++;
    }
    else{
        digit++;
    }
    
    printf("\n Lower case=%d",l_case);
    printf("\n Upper case=%d",u_case);
    printf("\nDigit=%d",digit);
}