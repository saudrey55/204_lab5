#include <stdio.h>

int main (){

    int i,n,a[1000],z=4;

    scanf("%d",&n);

    a[0]=1;
    a[1]=2;
    a[2]=3;
    for ( i = 3;i<1000 ;z++)
    {
        if (z/10==0)
        {
            if (z%2==0)
            {
                a[i]=z;
                i++; 
            }
            else if (z%3==0)
            {
                a[i]=z;
                i++;
            }
            else if (z%5==0)
            {
                a[i]=z;
                i++;
            }  
        }
        else
        {
            if (z%2==0&&z%3==0)
            {
                a[i]=z;
                i++;
            }
            else if (z%2==0&&z%5==0)
            {
                a[i]=z;
                i++;
            }
            else if (z%3==0&&z%5==0)
            {
                a[i]=z;
                i++;
            }
            else if (z%3==0&&z%5==0&&z%2==0)
            {
                a[i]=z;
                i++;
            }
            
        }
    }      
    for ( i = 0; i < 1000; i++)
    {
        if (n==i+1)
        {
            printf("%d",a[i]);
        }  
    }
    
    
    
}
