#include <stdio.h>
#define PESO_1 2
#define PESO_2 3
#define PESO_3 5

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 0;i < n; i++){
       double x=0,y=0,z=0, media=0;
       scanf("%lf %lf %lf", &x, &y, &z);
       
       media = ((x*PESO_1)+(y*PESO_2)+(z*PESO_3))/(PESO_1 + PESO_2 + PESO_3);

       printf("%.1lf\n", media);

    }


    return 0;
}