#include<stdio.h>
int main(void){
	int miesiace[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m, d, i, j;
	int a=1;
	scanf("%d", &m);
	scanf("%d", &d);
	printf("Miesiac %d\n", m);
	for(i=0; i<6; i++){
		for(j=0; j<7; j++){
			if(i==0 && j<d-1){
				printf("     ");
			}
			else if(a<=miesiace[m-1]){
				printf("%5d", a);
				a+=1;
			}
		}
		printf("\n");
	}
return 0;
} 