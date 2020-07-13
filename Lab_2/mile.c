#include<stdio.h>
int main(void){
	double i;
	double m;
	for(i=50; i<=100; i+=10){
		m=i/1.609344;
		printf("%5.0f", i);
		printf("%5.0f\n", m);
	}
return 0;
}