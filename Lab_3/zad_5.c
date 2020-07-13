#include<stdio.h>
#include<math.h>
int main(void){
	int x, n, i;
	int a=0;
	scanf("%d", &x);
	n=sqrt(x);
	for(i=2; i<=n; i++){
		if(x%i==0){
			a+=1;
		}
	}
	if(a==0 || x==2){
		printf("Liczba pierwsza");
	}
	else printf("Nie jest pierwsza");
return 0;
}