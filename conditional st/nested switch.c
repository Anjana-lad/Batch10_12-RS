// nested switch 
#include<stdio.h>
int main(){
    int choice,ch;
    printf("Select your choice for food:");
    printf("\n 1. Pizza \n 2. Cold-Drink");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            printf("\n You have selected Pizza");
            printf("\n 1. Veg Pizza \n 2. Cheese Pizza");
            printf("\n Enter choice for Pizza");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("You selected Veg Pizza");
                break;
            case 2:
                printf("You selected Cheese Pizza");
                break;           
            default:
                printf("Invalid Pizza choice");
                break;
            }
        break;
    case 2:
    printf("\n You have selected cold -Drink");
            printf("\n 1.Coke \n 2. Fresh juice");
            printf("\n Enter choice for Cold- drink");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("You selected Coke");
                break;
            case 2:
                printf("You selected Fresh Juice");
                break;           
            default:
                printf("Invalid cold -Drink choice");
                break;
            }

    break;
    default:
            printf ("Invalid choice for food \n thank you");
        break;
    }
}