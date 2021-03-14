#include<cstdio>
#include<stdlib.h>
int main()
{
    char a;
    int cnt=0;
    while(1)
    {
        a = getchar();
        if( a == '\n' )
            break;
        else if( a == ' ')
            continue;
        else 
            cnt++;
    }
    printf("%d", cnt);
    system("pause");
    return 0;
}