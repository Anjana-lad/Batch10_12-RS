//string  function 
// 1. strlen(): length of string;
// 2. strlwr(): change the str in lower case.
// 3. strupr(): change to upper case;
// 4. strcpy(): string copy;
// 5. strrev(): string reverse.
// 6. strcmp(): string compare;
// 7. strset(): string set;
// 8. strstr(): string inside string.
// 9. strchr():  string inside have character or not.
// 10. strcat(): string concatenate.

#include<stdio.h>
int main(){
    char str[20],str1[20],str3[20];// string array
    printf("Enter string :");
    gets(str);
    printf("Enter string 1");
    gets(str1);
    // int len;
    // len=strlen(str);
    // printf("\n String length:%d",len);
    // // string to upper case:
    // printf("\nString =%s",strupr(str));
    // // string to lower case:
    // printf("\nString =%s",strlwr(str));

    // string reverse:
   // printf("\n Reverse:%s",strrev(str));
    // string concatenate:
    //printf("string concatenate=%s",strcat(str,str1));

    // string compare:
    // if (string1 > str2) : 1
    // if(str1< str2): -1
    // if(str1==str2): 0

    //printf("string compare=%d",strcmp(str,str1));

    // string copy;strcpy(destination str,original str);
   // printf("String copy=%s",strcpy(str3,str1));
    //printf("\n str3=%s",str3);

    // string set : 
    //printf("String set:=%s",strset(str,'d'));
    
    // string character:
    printf("String character:%s",strchr(str1,'g'));

    // strstr string inside string
    printf("\n String inside string=%s",strstr(str1,"gram"));

}