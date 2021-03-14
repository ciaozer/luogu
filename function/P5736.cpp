#include<cstdio>
#include<stdlib.h>
int is_prime(int n)
{
    if( n==1 )
        return 0;
    if( n==2 )
        return 1;
    for( int i=2; i*i<=n; i++ )
    {
        if( n%i==0 )
            return 0;
    }
    return 1;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    for( int i=0; i<n; i++ )
    {
        scanf("%d", &a);
        if( is_prime(a) )
            printf("%d ", a);
    }
    // system("pause");
    return 0;
}