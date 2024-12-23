// user defined function  :
/*
function is that takes some input do computation on it and provides us output

function 3 parts;
1; function defintion
2. function declaration
3. function call
syntax:
 return-type function name(parameter list)
{
    body of the function
}

*/

#include<stdio.h>
int print();    // function defintion

int main(){
    print();    // function call
    print();
    print();
}

int print(){    // function declaration
    printf("Hello world welcome to user defined function.\n");  // body of the function
}
