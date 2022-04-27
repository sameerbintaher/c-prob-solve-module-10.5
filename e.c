#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if(B>=A && B<=6*A) 
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}