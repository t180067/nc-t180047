#include<stdio.h>

int main(){
    double a=1.0,s=0;
    int n,i;

    printf("N?");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        s += a;
        printf("s%d = %f\n",i,s);
        a /= 2.0;
    }
}
