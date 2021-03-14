#include<cstdio>
#include<stdlib.h>
#include<cstring>
int main()
{
    int n, cnt;
    scanf("%d", &n);
    int a[n+1][n+1], i=1, j=(n+1)/2;
    memset(a, 0, sizeof(a));
    for( cnt=1; cnt<=n*n; cnt++ )
    {
        a[i][j] = cnt;
        if( i==1 && j!=n )
        {
            i=n;
            j++;
        }
        else if( j==n && i!=1 )
        {
            j=1;
            i--;
        }
        else if( i==1 && j==n )
        {
            i++;
        }
        else 
        {
            if( a[i-1][j+1] == 0 )
            {
                i--;
                j++;
            }
            else 
            {
                i++;
            }
        }
    }
    for( int x=1; x<=n; x++ )
    {
        for( int y=1; y<=n; y++ )
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }
     system("pause");
    return 0;
}