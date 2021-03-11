#include<stdio.h>

int main()
{
    int n,i,j,k;

    scanf ("%d",n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-2-i ; j++)
        {
        printf("-");  
        }
        printf("\n");
    }
    
}