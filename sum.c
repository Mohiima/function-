#include<stdio.h>
 int sum(int x, int y)
 {
     return x+y;
 }
 int main()
 {
     int a,b;
     printf("enter two numbers ");
     scanf("%d %d",&a, &b);
     printf("Total : %d",sum(a,b));

 }
