/*
* * * * * 
*       *
*       *
*       *
* * * * * 
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             if(row == 1||row==5||col==5||col==1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//     printf("\n");
//     }
// }

/*
* 
* *
*   *
*     *
* * * * *
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             if(row==1||row==5||row==col||col==1){
//             printf("* ");
//         }
//         else{
//             printf("  ");
//         }
//         }
//     printf("\n");
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
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" * ");
//         }
//     printf("\n");
//     }
// }

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
//         for(col=row;col>=1;col--){
//             printf(" * ");
//         }
//     printf("\n");
//     }
// }
/*
          * 
        * * *
      * * * * *
    * * * * * * *
*/

// #include<stdio.h>
// int main(){
//     int row,col,space,n=5;
//     for(row=1;row<=n;row++){
//         for(space=5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=2*row-1;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *  
*/

#include<stdio.h>
int main(){
    int row,col,space,n;
    printf("Enter number;");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        for(space=n-1;space>=row;space--){
            printf("  ");
        }
        for(col=1;col<=row*2-1;col++){
            printf(" *");
 
        }
    (row*2-1)-2;
    printf("\n");
    }
}
