#include<cstdio>
#include<stdlib.h>
typedef unsigned long long ll;
int main()
{
    ll n, ans;
    scanf("%lld", &n);
    ans = n*(n-1)/2*(n-2)/3*(n-3)/4;
    printf("%lld", ans);
    // system("pause");
    return 0;
}