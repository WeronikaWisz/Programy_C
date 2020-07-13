#include<stdio.h>
void dodaj(int n, int m, double m1[][m], double m2[][n], double m3[][m]){
	int i;
	int j;
	int a=0;
	int b=0;
	while(a<n){
		while(b<m){
			for(i=0; i<n; i++){
				for(j=0; j<m; j++){
					m3[a][b]=m3[a][b]+(m1[i][j]*m2[j][i]);
				}
			}
		b+=1;
		}
	a+=1;
	}
	return;
}
int main(void){
	double t1[3][2]={{1, 2}, 
			 {2, 3},
			 {1, 4}};
	double t2[2][2]={{2, 3},
			 {1, 2}};
	double t3[3][2];

dodaj(3, 2, t1, t2, t3);

int h, g;

for(g=0; g<3; g++){
	for(h=0; h<2; h++){
		printf("%.0f", t3[g][h]); 
				}
}
return 0;
}