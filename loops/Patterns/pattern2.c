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
//         for(space=5-row;space>0;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" *");
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
//   int row,col,space;
//   for(row=1;row<=5;row++){
//     for(space=5-row;space>0;space--){
//       printf(" ");
//     }
//     for(col=1;col<=row;col++){
//       printf("%d",col);
//     }
//   printf("\n");
//   }
// }

/*
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>
int main(){
  int row,col;
  for(row=5;row>=1;row--){
    for(col=1;col<=5;col++){
      if(row<=col){
         printf("%d ",col);
      }
    else{
      printf("  ");
      }
    }
    printf("\n");
  }
}
// #include <stdio.h>
// int main(){
//     int row,col,space;
//        for(row=5;row>=1;row--) {
//          for(space=5;space>=row;space--) {
//           printf(" ");
//         }
//          for(col=row;col<=5;col++) {
//           printf(" %d",col);
//         }
//         printf("\n");
//     }
// }