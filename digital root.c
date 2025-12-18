#include <stdio.h>
int root(int n)
{
    int rem,sum;
    while(n>=10)

    {
 sum = 0;

        while(n!=0)
        {
            rem= n%10;
            sum= sum+rem;
            n=n/10;
        }
        n=sum;
    }
}

int main()
{
    int n2;
    printf("Enter any number: ");
    scanf("%d", &n2);

    printf("Digital Root = %d", root(n2));

    return 0;
}

