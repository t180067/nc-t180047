#include<stdio.h>

int main(){
    int t;
    double x;
    int y[10]={};

    while(1){
        printf("x? ");
        scanf("%lf",&x);
        if(x<=1.0) break;
    }

    for(t=0;t<10;t++){
        x=x*2.0;
        if(x>=1.0){
            y[t]=(int)x;
            x=x-1.0;
        }
        else
            y[t]=(int)x;
    }
    printf("0.");
    for(t=0;t<10;t++){
        printf("%d",y[t]);
    }
    printf("\n");
}
