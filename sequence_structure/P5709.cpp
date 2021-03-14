#include<cstdio>
#include<stdlib.h>
int main()
{
    int apple, cost, total, ans;
    scanf("%d%d%d", &apple, &cost, &total);
    if( cost == 0 )
        ans = 0;
    else
    {
        if( total%cost==0 )
            ans = apple - total/cost;
        else 
            ans = apple - total/cost - 1;
    }
    ans = ans>0 ? ans : 0;
    printf("%d", ans);
    // system("pause");
    return 0;
}