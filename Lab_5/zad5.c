#include<stdio.h>
double porownaj(int n, double w1[], double w2[]){
	int i;
	int a;
	a=1;
	for(i=0; i<n; i++){
		if(w1[i]!=w2[i]){
			a=0;
		}
	}
	return a;
}
int main(void){
	int x;
	double t1[5]={1, 2, 3, 4, 5};
	double t2[5]={1, 2, 3, 4, 5};
x=porownaj(5, t1, t2);
if(x==0){
	printf("Nie sa rownolegle"); 
}
else printf("Sa rownolegle");

printf("\n");
return 0;
}
