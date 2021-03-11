#include<stdio.h>

int main()
{
    int n,i,j,k;
    
    scanf ("%d",&n);
    char  z[n][((n-1)/2)*2+1];
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < ((n-1)/2)*2+1 ; j++)
            {
                z[i][j]='-';
            }
        }
    for ( i = 0; i < (n+1)/2; i++)
    {
        z[i][(n-1)/2+i]='*';
        z[i][(n-1)/2-i]='*';
        z[n-1-i][(n-1)/2+i]='*';
        z[n-1-i][(n-1)/2-i]='*';
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < ((n-1)/2)*2+1 ; j++)
        {
            printf("%c",z[i][j]);
        }
            printf("\n");
        }
    
}