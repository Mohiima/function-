#include<stdio.h>
float area(float r)
{
    return 3.1416*r*r;
}
int main()
{
    float b;
    printf("enter a radius ");
    scanf("%f",&b);
    printf("Circle area :%.2f",area(b));
}
