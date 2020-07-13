#include<stdio.h>
#include<string.h>

int main(void){

	FILE *plik;
	plik=fopen("polski.txt", "r");
	
	char tab[40];
	char max[40];
	fgets(max, 40, plik);
	
	while( !feof(plik) ){
		fgets(tab, 40, plik);
		if(strlen(tab)>strlen(max)){
			strcpy(max, tab);
		}
	}
	printf("%s", max);
	fclose(plik);
	return 0;
}
			