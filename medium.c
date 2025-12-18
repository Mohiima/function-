#include<stdio.h>
int mid(int x, int y,int z)
{
    if((x>y && x<z) || (x<y && x>z))
    return x;
    else if ((y>x && y<z) || (y<x && y>z))
        return y;
    else
    return z;
}
int main()
{
    int a,b,c;
    printf("enter three number ");
    scanf("%d %d %d",&a,&b,&c);
   printf("medium number :%d",mid(a,b,c));
}

