#include<stdio.h>

int main(){
    long long i=1;
    while(1){
        i=i*2;
        if(i<0)break;
    }
    printf("%lld\n",i-1);
}
