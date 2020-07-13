#include<stdio.h>

void porownanie(int n, double tab[], int *max, int *min){
	int a, b, i;
	a=tab[0];
	b=tab[0];
	for(i=0; i<n; i++){
		if(tab[i]>a){
			a=tab[i];
			*max=i+1;
		}
		if(tab[i]<b){
			b=tab[i];
			*min=i+1;
		}
	}
}
	
int main(void){

double tablica[5]={2,3,5,7,1};
int x, y, r;
r=sizeof tablica/sizeof tablica[0];
porownanie(r, tablica, &x, &y);
printf("Max: %d, min: %d\n", x, y);


return 0;
}