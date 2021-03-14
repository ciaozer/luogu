#include<cstdio>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[3];
    char str[5];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    scanf("%s", str);
    sort(a, a+3);
    printf("%d %d %d", a[str[0]-'A'], a[str[1]-'A'], a[str[2]-'A']);
    // system("pause");
    return 0;
}