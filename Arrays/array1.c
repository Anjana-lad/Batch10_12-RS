// array is used to store similar type of value in a single variable.
// syntax: return-type array_name[size];

// #include<stdio.h>
// int main(){
//     int arr[]={12,52,84,75,63};  // static array
//     int i;
//     for(i=0;i<5;i++){
//         printf("arr[%d]=%d \n",i,arr[i]);
//     }
// }


// dynamic array

#include<stdio.h>
int main(){
    int arr[7],sum=0;
    int i;
    printf("Enter array elements:");
    for(i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }

    // printing array
    printf("Printing array\n");
    for(i=0;i<7;i++){
        sum+=arr[i];
        printf("arr[%d]=%d\n",i,arr[i]);

    }
    printf("Sum of array=%d",sum);
}
