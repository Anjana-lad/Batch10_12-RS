/*
* * * * *
  * * * *
    * * *
      * *
        *
*/

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" *");
//         }
//     printf("\n");
//     }
// }

/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" %d",col);
//         }
//     printf("\n");
//     }
// }

/*
E D C B A
  D C B A
    C B A
      B A
        A
*/
#include<stdio.h>
int main(){
    int row,col,space;
    char ch='A';
    for(row=1;row<=5;row++){
        for(space=0;space<row;space++){
            printf("  ");
        }
        for(col=5-row;col>=0;col--){
            printf("%c ",ch+col);
            }
        printf("\n");
    }
}