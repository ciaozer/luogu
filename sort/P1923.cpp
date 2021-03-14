// #include<cstdio>                    //直接使用nth_element函数
// #include<stdlib.h>
// #include<algorithm>
// using namespace std;
// int a[5000001];
// int main()
// {
//     int n, k;
//     scanf("%d%d", &n, &k);
//     for( int i=0; i<n; i++ )
//         scanf("%d", &a[i]);
//     nth_element(a, a+k, a+n);       //使第k小的整数就位
//     printf("%d", a[k]);
//     system("pause");
//     return 0;
// }

#include<cstdio>
#include<stdlib.h>
int a[5000001];
int find(int left, int right, int k)
{
    if( left == right )
        return 
    int mid = (left+right)/2;
}

int main()
{
    int n, k, ans;
    scanf("%d%d", &n, &k);
    for( int i=0; i<n; i++ )
        scanf("%d", &a[i]);
    ans = find(0, n-1, k-1);
    printf("%d", ans);
    system("pause");
    return 0;
}