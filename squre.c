#include<stdio.h>

int squre(int s)
{
    return s;
}

int main()
{
    int a,sq;
    printf("enter a number: ");
    scanf("%d", &a);

    sq = a*a;

    printf("Total : %d", squre(sq)); // return দিয়ে show করছি

    return 0;
}
