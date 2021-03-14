#include<cstdio>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
using namespace std;
int a[1500][1500];
void func(int x1, int y1, int x2, int y2)
{
    int n = x2-x1;
    if( n==0 )      return ;
    int midx = (x1+x2)/2;
    int midy = (y1+y2)/2;
    for( int i=x1; i<=midx; i++ )
        for( int j=y1; j<=midy; j++ )
            a[i][j] = 0;
    func(midx+1, y1, x2, midy);
    func(x1, midy+1, midx, y2);
    func(midx+1, midy+1, x2, y2);
}

int main()
{
    int n;
    scanf("%d", &n);
    int m = pow(2, n);
    for( int i=1; i<=m; i++ )
        for( int j=1; j<=m; j++ )
            a[i][j] = 1;
    func(1, 1, m, m);
    for( int i=1; i<=m; i++ )
    {
        for( int j=1; j<=m; j++ )
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}