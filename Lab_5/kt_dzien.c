#include<stdio.h>

double liczenie_dni(int d, int m, int r){
	int i;
	double suma;
	int mi[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(r%4==0){
		mi[1]=29;
	}
	for(i=0; i<m-1; i++){
		suma+=mi[i];
	}
	suma+=d;
	return suma;
}

int main(void){
	
	double y;
	int dzien, miesiac, rok;
	printf("Podaj dzien: ");
	scanf("%d", &dzien);
	printf("Podaj miesiac: ");
	scanf("%d", &miesiac);
	printf("Podaj rok: ");
	scanf("%d", &rok);

	y=liczenie_dni(dzien, miesiac, rok);

	printf("%d-%d to %.0f dzien roku %d\n", dzien, miesiac, y, rok);
	return 0;
}