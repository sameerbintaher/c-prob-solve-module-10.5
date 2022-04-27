#include <stdio.h>
int main()
{
    int n, e;
    int p = 0, c = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&e);
        if(e == -1)
        {
            if(p > 0) p--;
            else c++;
        }
        else p += e;
    }
    printf("%d\n", c);
}