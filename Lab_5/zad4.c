#include<stdio.h>
#include<math.h>

double doKwadratu(int x){
	return x*x;
}

int main(void){
	float dlugosc;
	float sumkwad;
	int i;
	float wektor[7]={1, 1, 2, 1, 3, 2, 1};
	for(i=0; i<7; i++){
		sumkwad+=doKwadratu(wektor[i]);
	}
	dlugosc=sqrt(sumkwad);
	printf("%.2f\n", dlugosc);
return 0;
}