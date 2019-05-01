#include<stdio.h>

int main(){
    int s,t,n;
    
    /*printf("n?");
    scanf("%d",&n);*/
    n=30;

    long long a[n],b[n];

    for(s=0;s<=n;s++){
        a[s]=0;
        b[s]=0;
    }
    
    for(s=0;s<=n;s++){
        for(t=0;t<=s;t++){
            if(t == 0) {
                a[t] = 1;
                b[t] = a[t];
            }
            else if(t == s){
                a[t] = 1;
                b[t] = a[t];
                break;
            }
            else {b[t] = a[t];
                a[t] = b[t-1] + b[t];
                
            }
        }
    }
    for(s=0;s<=n;s++){
        printf("%dC%d = %lld\n",n,s,a[s]);
    }
}
