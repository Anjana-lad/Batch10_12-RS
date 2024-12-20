/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
/*
*
* *
* * *
* * * *
* * * * *
*/

// #include<stdio.h>
// int main(){
//     int row,col,num=1;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d ",num);
//             num++;
//         }
//     printf("\n");
//     }
// }

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d",col);
//         }
//     printf("\n");
//     }
// }

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             if(col%2==0){
//                 printf("0");
//             }
//             else{
//                 printf("1");
//             }
//         }
//     printf("\n");
//     }
// }

/*
A
* *
B C D
* * * * 
E F G H I
*/
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(row%2==0){
                printf("* ");
            }
            else{
                printf("%c ",ch);
                ch++;
            }
        }
    printf("\n");
    }
}