// to find the area of circle
#include<stdio.h>
#define pi 3.14
int main(){
    float radius,area;  /// variable
  //  const float pi=3.14;  // constant variable
    printf("Enter radius:");
    scanf("%f",&radius);    // user input
    area=pi*radius*radius;  // formula
    printf("Area of circle=%.2f",area); // print output.
}