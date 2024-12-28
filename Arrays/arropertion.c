// array operation: summation ,subtraction, multiplication 
#include<stdio.h>
#define max 20
int main(){
    int r,c,row,col,arr1[max][max],arr2[max][max],sum[max][max],sub[max][max],mul[max][max];
    printf("Enter rows and cols");
    scanf("%d %d",&r,&c);
    
    printf("Enter array 1:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
      printf("Enter array 2:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }

    printf("\nArray 1");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr1[row][col]);
        }
    }
        printf("\nArray 2\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr2[row][col]);
        }
    }

    // // logic for addition
    // for(row=0;row<r;row++){
    //     for(col=0;col<c;col++){
    //         sum[row][col]=arr1[row][col]+arr2[row][col];
    //     }
    // }

    //     printf("\nAddition array\n");
    // for(row=0;row<r;row++){
    //     printf("\n");
    //     for(col=0;col<c;col++){
    //         printf("%d \t",sum[row][col]);
    //     }
    // }

    // // logic for subtraction
    // for(row=0;row<r;row++){
    //     for(col=0;col<c;col++){
    //         sub[row][col]=arr1[row][col]-arr2[row][col];
    //     }
    // }
    
    // printf("\nSubtraction array\n");
    // for(row=0;row<r;row++){
    //     printf("\n");
    //     for(col=0;col<c;col++){
    //         printf("%d \t",sub[row][col]);
    //     }
    // }
    
    // logic for multiplication
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+= arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\nmultiplication array\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",mul[row][col]);
        }
    }
}