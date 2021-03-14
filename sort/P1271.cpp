#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, m, bucket[1000];
    scanf("%d%d", &n, &m);
    memset(bucket, 0, sizeof(bucket));
    for( int i=0; i<m; i++ )
    {
        int temp;
        scanf("%d", &temp);
        bucket[temp]++;
    }
    for( int i=0; i<1000; i++ )
    {
        while(bucket[i]--)
            printf("%d ", i);
    }
    system("pause");
    return 0;
}