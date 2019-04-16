#include <stdio.h>

int main(void){
	double x,y,z;
	double max;
	int s,t;
	int a=10;
	
	for(s=-a;s<=a;s++){
		x=(double)s/(double)a;
		for(t=-a;t<=a;t++){	
			y=(double)t/(double)a;
			z=2*(x+y)/(x*x+y*y+1);
			if(s==-a && t==-a)
				max=z;
			if(max<z)
				max=z;
		}
	}
	printf("max:%f\n",max);
	return 0;
}
