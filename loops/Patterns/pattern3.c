/*
* * * * *
* * * *
* * *
* *
*
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=5;row>=1;row--){
//         for(col=1;col<=row;col++){
//             printf("%d ",col);
//         }
//     printf("\n");
//     }
// }
/*
A A A A A
B B B B
C C C
D D
E
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     char ch='A';
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("%c",ch);
//         }
//         ch++;
//         printf("\n");
//     }

// }

/*
0 1 0 1 0
1 0 1 0
0 1 0
1 0
0
*/


#include<stdio.h>
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%2d",(row+col)%2);
        }
    printf("\n");
    }
}

/*
row=5 col=1  
5+1=6%2=0;
row=5; col=2
5+2=7%2=1

row=4;col=1
4+1=5%2=1
*/