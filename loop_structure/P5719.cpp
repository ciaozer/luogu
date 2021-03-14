#include<cstdio>
#include<cstdlib>
int main()
{
    int n, k; 
    double ans1=0, ans2=0, cnt1=0, cnt2=0;
    scanf("%d%d", &n, &k);
    for( int i=1; i<=n; i++ )
    {
        if( i%k==0 )        //A
        {
            ans1 += i;
            cnt1 += 1;
        }
        else 
        {
            ans2 += i;
            cnt2 += 1;
        }
    }
    ans1 = ans1/cnt1;
    ans2 = ans2/cnt2;
    printf("%.1lf %.1lf", ans1, ans2);
    // system("pause");
    return 0;
}