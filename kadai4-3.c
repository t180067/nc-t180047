#include<stdio.h>

int main(){
    int a=1;
    int n,i;

    printf("N?");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        printf("a%d = %d\n",i,a);
        a = 2*a+1;
    }
}
