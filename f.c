#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int energy = pow(32, (a - b));
        printf("%d\n", energy);
    }else {
        printf("1\n");
    }
    return 0;
}