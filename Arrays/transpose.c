// transpose : means to change the rows to column
#include<stdio.h>
int main(){
    int r,c,arr1[20][20],transpose[20][20],row,col;
    printf("Enter row and col:");
    scanf("%d %d",&r,&c);

    printf("Enter values of array elements:\n");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }

    printf("\nArray\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",arr1[row][col]);
        }
    }

    // computing transpose
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            transpose[col][row]=arr1[row][col];
        }
    }

    printf("\n Transpose Array\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",transpose[row][col]);
        }
    }
} 
