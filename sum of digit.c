#include<stdio.h>
int sum(int n)
{
    int s=0,rem;
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    return s;

}
int main()
{
    int n1;
    printf("enter a digit");
    scanf("%d",&n1);
    printf("SUM OF DIGIT %d",sum(n1));
}
