#include<stdio.h>

int main(void){

char pole[9]={'1','2','3','4','5','6','7','8','9'};
int i;
int ruch_gr1;
int ruch_gr2;
int j, k;
int a, b;
int ruch=0;

	for(i=0; i<9; i++){
		printf("%2c", pole[i]);
		if(i==2 || i==5){
			printf("\n");
		}
	}
	printf("\n");

while(ruch<5){

	printf("Gracz 1. Podaj numer pola: ");
	scanf("%d", &ruch_gr1);
	while (ruch_gr1<1 || ruch_gr1>9 || pole[ruch_gr1-1]=='O' || pole[ruch_gr1-1]=='X' ){
		printf("Gracz 1. Podaj numer pola: ");
		scanf("%d", &ruch_gr1);
	}
	a=(int)ruch_gr1;
	pole[a-1]='X';

	for(j=0; j<9; j++){
		printf("%2c", pole[j]);
		if(j==2 || j==5){
			printf("\n");
		}
	}
	printf("\n");

	if((pole[0]==pole[1] && pole[0]==pole[2]) || (pole[3]==pole[4] && pole[3]==pole[5]) ||(pole[6]==pole[7] && pole[6]==pole[8]) || (pole[0]==pole[3] && pole[0]==pole[6]) ||(pole[1]==pole[4] && pole[1]==pole[7]) || (pole[2]==pole[5] && pole[2]==pole[8]) ||(pole[0]==pole[4] && pole[0]==pole[8]) || (pole[2]==pole[4] && pole[2]==pole[6])){
		printf("Gracz 1 wygrywa\n");
		break;
	}
	 
	if(ruch==4){
		printf("Remis\n");
		break;
	}

	printf("Gracz 2. Podaj numer pola: ");
	scanf("%d", &ruch_gr2);
	while (ruch_gr2<1 || ruch_gr2>9 || pole[ruch_gr2-1]=='O' || pole[ruch_gr2-1]=='X'){
		printf("Gracz 2. Podaj numer pola: ");
		scanf("%d", &ruch_gr2);
	}
	b=(int)ruch_gr2;
	pole[b-1]='O';

	for(k=0; k<9; k++){
		printf("%2c", pole[k]);
		if(k==2 || k==5){
			printf("\n");
		}
	}
	printf("\n");
	if((pole[0]==pole[1] && pole[0]==pole[2]) || (pole[3]==pole[4] && pole[3]==pole[5]) ||(pole[6]==pole[7] && pole[6]==pole[8]) || (pole[0]==pole[3] && pole[0]==pole[6]) ||(pole[1]==pole[4] && pole[1]==pole[7]) || (pole[2]==pole[5] && pole[2]==pole[8]) ||(pole[0]==pole[4] && pole[0]==pole[8]) || (pole[2]==pole[4] && pole[2]==pole[6])){
		printf("Gracz 2 wygrywa\n");
		break;
	}

	ruch++;
}

return 0;
}