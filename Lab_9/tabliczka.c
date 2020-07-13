#include<stdio.h>
#include<stdlib.h>

int main(void){

int zakres, size;
printf("Podaj zakres ");
scanf("%d", &zakres);
size=zakres+1;

int n, m, a, b;
int *tab[size][size];

	for(n=0; n<size; n++){
		for(m=0; m<=n; m++){
			tab[n][m]=(int*)malloc(sizeof(int));
			*tab[n][m]=(n)*(m);
		}
	}
	
	for(a=1; a<size; a++){
		for(b=1; b<=a; b++){
			printf("%d", *tab[a][b]);
		}
		printf("\n");
	}


int i, j;
printf("Jakie liczby chcesz pomnozyc? ");
printf("Liczba 1: ");
scanf("%d", &i);
printf("Liczba 2: ");
scanf("%d", &j);

if(i<=j){
	printf("%d", *tab[j][i]);
}
else{
	printf("%d", *tab[i][j]);
}
printf("\n");

return 0;
}