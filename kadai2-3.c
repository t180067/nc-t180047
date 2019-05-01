#include<stdio.h>

int main(){
    short a, c;
    int b;
    a=47;b=1;
    while(1){ 
        c = a + b;
        if(c == 0){
            printf("a + b = 0 (%hd,%d)\n",a, b);
            if(b>0)break;
        }
        b++;
    }
}
