#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);
    if(y<=100){
        printf("1\n");
    }else if(y%100==0){
        printf("%d\n", y/100);
    }else {
        printf("%d\n",(y/100)+1);
    }
    return 0;
}