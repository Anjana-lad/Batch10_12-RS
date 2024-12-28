/* 2D array is also called matrix : as it the combination of rows and columns.
syntax: return-type arrayname[row size][col size];*/

// // program to print static 2d array
// #include<stdio.h>
// int main(){
//     int arr[2][3]={
//                   {1,2,3},
//                   {4,8,6}
//                 };
//     int row,col;
//     printf("\nPrinting 2D array\n");
//     for(row=0;row<2;row++){
//         printf("\n");
//         for(col=0;col<3;col++){
//             printf("%d ",arr[row][col]);
//         }
//     }
// }

// program for dynamic matrix;
#include<stdio.h>
int main(){
    int row,col,arr[3][3];
    printf("Enter values of array elements:\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\nArray\n");
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d",arr[row][col]);
        }
    }
}