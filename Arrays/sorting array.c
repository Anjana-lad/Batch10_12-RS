// sorting array means to sort the array in ascending and descending array.
#include<stdio.h>
int main(){
    int arr[7]={74,52,96,12,63,84,35};
    int i,j,temp;
    printf("Array \n");
    for(i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
    // logic for ascending
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n Ascending array\n");
    for(i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}