#include<stdio.h>

double silnia(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*silnia(n-1);	
	}
}

int main(void){
int l;
double s;
scanf("%d", &l);
s=silnia(l);
printf("%.0f\n",s);
return 0;
}