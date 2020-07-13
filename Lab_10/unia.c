#include<stdio.h>

enum rodzaj {os, ci, au};
enum Naped {benzynowy, diesel, elektryczny, hybrydowy};
enum Kolor {red=0, green=1, blue=2};

struct Osobowy{
	double ladowalnosc;
	enum Naped naped;
	double liczba_osi;
	double dlugosc;
	int liczba_drzwi;
	enum Kolor kolor;
};

struct Ciezarowy{
	double ladowalnosc;
	int liczba_osi;
	int dlugosc;
};

struct Autobus{
	int liczba_miejsc;
	int dlugosc;
};

struct pojazd{

	enum rodzaj jaki;

	char marka[20];
	double cena;
	int przeglady[10];
	
	union
	{
	struct Osobowy osobowy;
	struct Ciezarowy ciezarowy;
	struct Autobus autobus;
	};
};

int main(void){

	struct pojazd moj;
	moj.jaki=os;
	fgets(moj.marka, 20, stdin);
	scanf("%d", &moj.osobowy.kolor);
	scanf("%lf", &moj.osobowy.dlugosc);
	printf("%s", moj.marka);
	printf("%u", moj.osobowy.kolor);
	printf("%lf", moj.osobowy.dlugosc);

return 0;
}