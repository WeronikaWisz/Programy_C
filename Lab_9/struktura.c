#include<stdio.h>

#define TSIZE 3

struct book {
	
	char imie_nazwisko[40];
	char tytul[100];
	int nr_kat;
	double cena;

};

int main(void){

struct book table[TSIZE];

int i, j;

	for(i=0;i<TSIZE;i++){

		fgets(table[i].imie_nazwisko, 40, stdin);
		fgets(table[i].tytul, 100, stdin);
		scanf("%d",&table[i].nr_kat);
		scanf("%lf",&table[i].cena);

}

for(j=0;j<TSIZE;j++){
      printf ("%s %s %d %f\n", table[i].imie_nazwisko, table[i].tytul, table[i].nr_kat, table[i].cena );
}
return 0;
}