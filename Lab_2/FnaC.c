#include<stdio.h>
int main(void){
	double f;
	double c;
	printf("Podaj stopnie fahrenheita: ");
	scanf("%lf",&f);
	c=5*(f-32)/9;
	printf("%.2f\n",c);
	return 0;
}
