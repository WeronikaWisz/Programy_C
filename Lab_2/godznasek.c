#include<stdio.h>
int main(void){
	double x;
	double y;
	printf("Podaj liczbe minut: ");
	scanf("%lf",&x);
	y=x/60;
	printf("%.2f\n",y);
	return 0;
}
