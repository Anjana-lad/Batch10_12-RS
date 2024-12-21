// loop control statement: break,continue,goto statement
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//           printf("%d\n",i);
//         if(i==5){
//             break;
//         }
      
//     }
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
        
//         if(i==5){
//             continue;
//         }
//         printf("%d\n",i);
//     }
// }

/* goto statement

label:
    body part;

if(condition)
{
goto label;
}
*/
#include<stdio.h>
int main(){
    int num;
    label:
    printf("Enter number press 0 to exit ");
    scanf("%d",&num);

    if(num>0){
        printf("%d \n ",num);
        goto label;
    }
    else{
        printf("Thank you");
    }
}