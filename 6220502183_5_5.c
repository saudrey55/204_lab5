#include<stdio.h>

int main()
{
    int n,m,i,j,z,k,l,max;

    scanf("%d",&n);
    scanf("%d",&m);
    z=((n-m)+1)*((n-m)+1);
    int a[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x[z];
    for ( i = 0; i < n-m+1; i++)
    {
        x[i]=0;
        for ( j = 0; i < n-m+1; j++)
        {
            for (k = 0; k < m; k++)
            {
                for ( l = 0; i < m; l++)
                {
                    
                    x[i]+=a[i+k][j+l];
                }
                
            }
            
        }
        max=x[0];

        for ( i = 1; i < z; i++)
        {
            if (x[i]>max)
            {
                max=x[i];
            }
            
        }
        printf("%d",max);
    }
    
    


}