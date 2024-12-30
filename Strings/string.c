// strings : groups of characters is called string.
//<string.h> header file to use the string function.
#include<stdio.h>
int main(){
    char str[20];  // declaration of string.
    printf("Enter string:");
  //  scanf("%[^\n]s",&str);  // formatted input function
      gets(str);  // unformatted input function 
    printf("Str=%s",str);
}