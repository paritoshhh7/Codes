#include <stdio.h>

int funB(int n);

int funA(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        funB(n-1);
    }    
    return 0;
}

int funB(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        funA(n/2);
    }
}

int main()
{   
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    funA(n);

    return 0;
}
