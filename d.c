#include <stdio.h>
int main(){
    int v,a,b,c;
    scanf("%d %d %d %d",&v,&a,&b,&c);
    while(v>=0){
        v=v-a;
        int f = v;
        v=v-b;
        int m = v;
        v=v-c;
        int t = v;
        if(f<0) printf("F\n");
        else if(m<0) printf("M\n");
        else if(t<0) printf("T\n");   
    }
}