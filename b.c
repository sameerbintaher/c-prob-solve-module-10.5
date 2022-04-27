#include<stdio.h>
int main(){
    double n;
    scanf("%lf",&n);
    if ((n >= -2147483648) && (n <= 2147483647)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}