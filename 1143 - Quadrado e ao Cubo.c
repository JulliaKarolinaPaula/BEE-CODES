#include <stdio.h>
#include <math.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        int quad, cub;

        quad = pow(i,2);
        cub = pow(i,3);

        printf("%d %d %d\n", i, quad, cub);

    }

    return 0;
}
