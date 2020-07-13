#include<stdio.h>
int main(void){
	double w;
	double h;
	double bmi;
	printf("Podaj wage w kg: ");
	scanf("%lf",&w);
	printf("Podaj wzrost w cm: ");
	scanf("%lf",&h);
	bmi=10000*w/(h*h);
	printf("%.2f\n",bmi);
	return 0;
}
