#include <stdio.h>

int main(){
  int n;  
  double id=0, md=0, p=0;
    
    do{
        scanf("%d", &n);
      if(n > 0){
        id = id + n;
        p += 1;}
    } while (n > 0);

    md = id/p;

    printf("%.2lf\n", md);

    return 0;
}