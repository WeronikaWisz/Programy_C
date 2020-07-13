#include<stdio.h>
#include<string.h>

int main(void){
	int n, m, i, j;
	char znaki1[100];
	scanf("%99s", znaki1);
	n=strlen(znaki1);

	char znaki2[100];
	scanf("%99s", znaki2);
	m=strlen(znaki2);

int a=0;
int min=0; 

if(m<n){
	min=m;
}
else min=n;

	
for(i=0; i<min; i++){
	if(znaki1[i]==znaki2[i]){
		a++;
	}
	if(znaki1[i]!=znaki2[i]){
		break;
	}
}
	
printf("%d\n", a);
return 0;
}
