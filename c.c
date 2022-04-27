#include <stdio.h>
int main(){
    int n,p,c=0;
    scanf("%d %d",&n,&p);
    for (int i=1;i<=n;i++){
        int m;
        scanf("%d",&m);
        if(m<p) c++;
    }
    printf("%d\n",c);
}