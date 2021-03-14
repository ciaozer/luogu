#include<cstdio>
#include<stdlib.h>
int main()
{
    int n, cnt=1;
    scanf("%d", &n);
    for( int i=1; i<=n; i++ )   //列数
    {
        for( int j=1; j<=n-i+1; j++ )   //行数
        {
            if( cnt<10 )
            {
                printf("0%d", cnt);
            }
            else 
            {
                printf("%d", cnt);
            }
            cnt++;
        }
        printf("\n");
    }
    // system("pause");
    return 0;
}