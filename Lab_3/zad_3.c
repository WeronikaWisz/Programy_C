#include<stdio.h>
#include<string.h>
int main(void){
	char liczba[20];
	int system;
	int i, dl, x, wynik;
	fgets(liczba,20,stdin);
	scanf("%d",&system);
	dl=strlen(liczba);
	dl-=1;
	for(i=0;i<dl;i++){
		if((int)liczba[i]>64){
			x=(int)liczba[i];
			x=x-55;
			wynik=wynik*system;
			wynik+=x;
		}
		else{
			x=(int)liczba[i];
			x=x-48;
			wynik=wynik*system;
			wynik+=x;
		}
	}
	printf("%d\n",wynik);
return 0;
}