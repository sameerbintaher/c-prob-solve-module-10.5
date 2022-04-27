#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a = 0.0;
    for(int i = 1; i <= n; i++)
    {
        int b;
        scanf("%d", &b);
        a += b;
    }
    double c = n*1.0;
    double f = a/c;
    printf("%lf\n", f);
}