#include<stdio.h>
int main()
{
    int a, count = 0;
    scanf("%d", &a);
    int ar[a];
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 1)
        {
            count++;
        }
    }
    if(count == 0) printf("EASY\n");
    
    else printf("HARD\n");
}