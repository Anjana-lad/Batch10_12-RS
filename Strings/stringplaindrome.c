// string palindrome without function
#include<stdio.h>
#include<string.h>
int main(){
    int len,i,temp=0;
    char str[20];
    printf("Enter string:");
    gets(str);

    len=strlen(str);
    for(i=0;i<=len/2;i++){
        if(str[i]!=str[len-1-i]){
            temp=1;
            break;
        }
    }
    
    if(temp==1){
        printf("string is not a palindrome");
    }
    else{
        printf("String is palindrome.");
    }
}

// task to find using strrev function
// to compare 2 string without using function.
