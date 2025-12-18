#include<stdio.h>
float area(float h, float w)
{
    return .5*h*w;
}
int main()
{
    float a,b;
    printf("enter number ");
    scanf("%f %f",&a,&b);
    printf("Triangle Area %.2f",area(a,b));
}
