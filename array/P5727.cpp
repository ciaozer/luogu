#include<cstdio>
#include<stdlib.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    scanf("%d", &n);
    while( n!=1 )
    {
        s.push(n);
        if( n%2 == 0 )
            n = n/2;
        else 
            n = 3*n+1;
    }
    s.push(1);
    while( !s.empty() )
    {
        printf("%d ", s.top());
        s.pop();
    }
    // system("pause");
    return 0;
}