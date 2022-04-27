#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int b=x;
    double c=x-b;
    if(c<.5) printf("%d\n",b);
    else printf("%d\n",b+1);
    return 0;
}