#include<stdio.h>

int area(int length, int width)
{
    return length * width;
}

int main()
{
    int l, w;

    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &l, &w);

    printf("Area = %d", area(l, w));

    return 0;
}

