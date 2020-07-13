#include<stdio.h>
#include<string.h>
int main(void){
	int liczba, system, i, j;
	int x;
	char nowa[100];
	scanf("%d", &liczba);
	scanf("%d", &system);
	for(i=0; liczba>0; i++){
			x=liczba%system;
			liczba=liczba/system;
			nowa[i]=x;
		}
	for(j=i-1; j>=0; j--){
		printf("%d", nowa[j]);
		}
	printf("\n");
return 0;
} 