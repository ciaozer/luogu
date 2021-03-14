#include<cstdio>
#include<stdlib.h>
int main()
{
    int a, b, h, n, a1, b1, h1, a2, b2, h2, ans=0;
    scanf("%d%d%d%d", &a, &b, &h, &n);
    bool vis[a+1][b+1][h+1] = {false};
    while(n--)
    {
        scanf("%d%d%d%d%d%d", &a1, &b1, &h1, &a2, &b2, &h2);
        for( int i=a1; i<=a2; i++ )
            for( int j=b1; j<=b2; j++ )
                for( int k=h1; k<=h2; k++ )
                    vis[i][j][k] = true;
    }
    for( int i=1; i<=a; i++ )
        for( int j=1; j<=b; j++ )
            for( int k=1; k<=h; k++ )
                if( vis[i][j][k] == false )
                    ans++;
    printf("%d", ans);
    // system("pause");
    return 0;
}