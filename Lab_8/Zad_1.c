#include<stdio.h>

void drukowanie(int n, char tab[][20]){
	int i;
	for(i=0; i<n; i++){
		printf("%s", tab[i]);
	}
	return;
}

int main(void){

char tablica[3][20];
int j;

	for(j=0; j<3; j++){
		fgets(tablica[j], 20, stdin);
	}
	drukowanie(3, tablica);

return 0;
}