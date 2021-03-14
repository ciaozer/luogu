#include<cstdio>
#include<stdlib.h>
#include<cstring>
struct bign
{
    int d[2000];
    int len;
    bign()
    {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

bign add(bign a, bign b)
{
    bign c;
    int carry = 0;
    for( int i=0; i<a.len || i<b.len; i++ )
    {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++] = temp%10;
        carry = temp/10;
    }
    if( carry != 0 )
        c.d[c.len++] = carry;
    return c;
}

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
        carry /=10;
    }
    return c;
}

bign factorial(int n)
{
    bign ans;
    ans.d[0] = 1;
    ans.len = 1;
    for( int i=n; i>=1; i-- )
        ans = mutiple(ans, i);
    return ans;
}

void print(bign a)
{
    for( int i=a.len-1; i>=0; i-- )
        printf("%d", a.d[i]);
}

int main()
{
    int n;
    bign ans;
    scanf("%d", &n);
    for( int i=1; i<=n; i++ )
        ans = add(ans, factorial(i));
    print(ans);
    // print(factorial(3));
    system("pause");
    return 0;
}