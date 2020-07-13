#include<stdio.h>
int main(void){
	int liczba;
	int system;
	int a, w=0; 
	printf("Podaj w jakim systemie jest liczba: ");
	scanf("%d", &system);
	printf("Podaj liczbe: ");
	scanf("%d", &liczba);
	while(liczba>0){
		w*=system;
		a=liczba%10;
		w+=a;
		liczba/=10;
	}
	printf("%d\n", w);
return 0;
}