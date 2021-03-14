#include<cstdio>
#include<stdlib.h>
#include<cstring>
struct bign{
    int d[5000];
    int len;
    bign()
    {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

bign mutiple(bign a, int b)
{
    bign c;
    int carry = 0;
    for( int i=0; i<a.len; i++ )
    {
        int temp = a.d[i]*b+carry;
        c.d[c.len++] = temp%10;
        carry = temp/10;
    }
    while( carry!=0 )
    {
        c.d[c.len++] = carry%10;
        carry /= 10;
    }
    return c;
}

bign factorial(int n)
{
    bign ans;
    ans.d[0] = 1;
    ans.len = 1;
    for( int i=1; i<=n; i++ )
        ans = mutiple(ans, i);
    return ans;
}

int main()
{
    int n, m, a;
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d%d", &n, &a);
        bign ans = factorial(n);
        int cnt = 0;
        for( int i=0; i<ans.len; i++ )
            if( ans.d[i] == a )
                cnt++;
        printf("%d\n", cnt);
    }
    system("pause");
    return 0;
}