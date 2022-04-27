#include <stdio.h>
int main()
{
    int n, m = 4;
    scanf("%d", &n);

    if (n >= 126 && n <= 211) m = 6;
    if (n >= 212 && n <= 214) m = 8;

    printf("%d\n", m);
}