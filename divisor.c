#include<stdio.h>

int divisor(int x, int y)
{
    return x/(float)y;
}
int main()
{
    int a,b;
    printf("enter numbers ");
    scanf("%d %d",&a,&b);
    printf("divisor %d",divisor(a,b));
}
