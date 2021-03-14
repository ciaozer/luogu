#include<cstdio>
#include<cmath>
int main()
{
    double a, b, c, p, ans;
    scanf("%lf%lf%lf", &a, &b, &c);
    p = (a+b+c)/2.0;
    ans = pow(p*(p-a)*(p-b)*(p-c), 0.5);
    printf("%.1lf", ans);
    // system("pause");
    return 0;
}