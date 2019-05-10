#include<stdio.h>
#define Pi 3.14159265

int main(){
	int n=0;
	double sum=0,a=2.0;
	
	while(n<24){
		sum = sum + a;
		printf("n = %d :Pi = %.8f,error : %e\n",n,sum,Pi-sum);
		n++;
		a = a*n/(2*n+1);
	}
}
