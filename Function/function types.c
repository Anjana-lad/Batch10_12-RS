/*
    function categories 
    1. function with no parameter no return st.
    2. function with parameter no return st.
    3. function with no parameter with return st.
    4. function with parameter and with return st.
*/
/*1.function with no parameter no return st. */
// #include<stdio.h>
// int sum(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Total =%d",a+b);
// }
// int main(){
//     sum();
//     sum();
// }

/*2.  function with parameter no return st. */

// #include<stdio.h>
// int sum(int a,int b){
//     printf("Sum=%d",a+b);
// }
// int main(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     sum(40,80);
// }

/*3. function with no parameter with return st.*/

// #include<stdio.h>
// int sum(){
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
// int main(){
//     printf("Calling sum function\n total=%d",sum());
// }

/*4. function with parameter and with return st */

#include<stdio.h>
int sum(int a,int  b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    printf("Total=%d",sum(a,b));    
}

// there are two types of parameter/ arguments :
// 1. formal parameter:  parameter passed with function defintion or declaration
// 2. actual parameter : parameter passed at the time of calling function in the main function