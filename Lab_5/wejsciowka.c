#include<stdio.h>

double doKwadratu(int x){
	return x*x;
}

int main(void){
	int i;
	double suma;
	for(i=3; i<=100; i++){
		if(i<50 || i>65){
			suma+=doKwadratu(i);
		}
	}
	printf("%f", suma);
return 0;
}