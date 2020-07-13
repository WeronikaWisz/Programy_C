#include<stdio.h>
int main(void){
int i, j;
int k, l;
scanf("%d", &k);
scanf("%d", &l);
	for(i=1;i<k+1;i++){
		for(j=1;j<l+1;j++){
			printf("%2d", i*j);
		}
		printf("\n");
	}
return 0;
}