#include<stdio.h>
#include<string.h>

int main(void){
	int n, i, j;
	char znaki[100];
	scanf("%99s", znaki);
	n=strlen(znaki);

int a=0;
int max=0; 
int indeks;
	
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		if(znaki[i]==znaki[j]){
			a++;
		}
	}
	if(a>max){
		max=a;
		indeks=i;
	}
	a=0;
}
printf("%c\n", znaki[indeks]);
return 0;
}

	