#include<cstdio>
#include<stdlib.h>
#include<cstring>
struct bign
{
    int d[4005];
    int len;
    bign()
    {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

bign change(char str[])
{
    bign a;
    a.len = strlen(str);
    for( int i=0; i<a.len; i++ )
        a.d[i] = str[a.len-i-1] - '0';
    return a;
}

bign mutiple(bign a, bign b)
{
    bign c;
    int carry = 0;
    for( int i=0; i<a.len; i++ )
    {
        for( int j=0; j<b.len; j++ )
        {
            int temp = a.d[i]*b.d[j]+c.d[i+j]+carry;
            c.d[i+j+1] += temp/10;
            c.d[i+j] = temp%10;
        }
    }
    c.len = a.len+b.len;
    while(1)
    {
        if( c.d[c.len-1] == 0 )
        {
            c.len--;
            if( c.len<=0 )
                break;
            continue;
        }
        break;
    }
    return c;
}

void print(bign a)
{
    if( a.len == 0 )
    {
        printf("0");
        return ;
    }
    for( int i=a.len-1; i>=0; i-- )
        printf("%d", a.d[i]);
}

int main()
{
    char num1[2005], num2[2005];
    scanf("%s%s", num1, num2);
    bign a = change(num1);
    bign b = change(num2);
    bign c = mutiple(a, b);
    print(c);
    system("pause");
    return 0;
}