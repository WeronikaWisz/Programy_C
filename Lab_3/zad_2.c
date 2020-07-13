#include<stdio.h>
int main(void){
	int liczba, system, i, j;
	int x;
	int a;
	char reszty[20];
	scanf("%d", &liczba);
	scanf("%d", &system);
	for(i=0; liczba>0; i++){
			x=liczba%system;
			if(x>9){
				x=x+55;
				reszty[i]=(char)x;
			}
			else{
				x=x+48;
				reszty[i]=(char)x;
			}
			liczba=liczba/system;
			a+=1;
		}
	for(j=a-1; j>=0; j--){
		printf("%c", reszty[j]);
	}
	printf("\n");
return 0;
} 