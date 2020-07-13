#include<stdio.h>
void dodaj(int n, double w1[], double w2[], double w3[]){
	int i;
	for(i=0; i<n; i++){
		w3[i]=w2[i]+w1[i];
	}
	return;
}
int main(void){
	double t1[5]={1, 2, 3, 4, 5};
	double t2[5]={2, 1, 4, 3, 5};
	double t3[5];
dodaj(5, t1, t2, t3);
int j;
for(j=0; j<5; j++){
	printf("%.0f, ", t3[j]);
}
printf("\n");
return 0;
}

	