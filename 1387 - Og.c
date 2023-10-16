#include <stdio.h>

int main(){
    int l,r, tf;

    do{
        scanf("%d %d", &l, &r);
        if((l > 0)&&(r > 0)){
        tf = l+r;
        printf("%d", tf);}
    } while((l > 0)&&(r > 0));

    return 0;
}