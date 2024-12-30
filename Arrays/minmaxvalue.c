// minimum and maximum value from and array
#include<stdio.h>
int main(){
    int arr[10];
    int row,min,max;
    printf("Enter the array elements:");
    for(row=0;row<10;row++){
        scanf("%d",&arr[row]);
    }
    min=arr[0];
    max=arr[0];

    for(row=0;row<10;row++){
        if(max<arr[row]){
            max=arr[row];
        }
        if(min>arr[row]){
            min=arr[row];
        }
    }

    printf("Maximum value is=%d",max);
    printf("\n Minimum value = %d",min);
}