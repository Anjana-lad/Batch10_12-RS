// accessing array element:
#include<stdio.h>
int main(){
    int num,size,i;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // for printing
    printf("\nArray\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter number to access:");
    scanf("%d",&num);

 for(int i=0;i<size;i++){          
        if(arr[i] == num){             
            printf("position=%d",i);
        }
    }
}