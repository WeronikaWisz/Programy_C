#include<stdio.h>
int main(void){
int i, j;
	for(i=1;i<11;i++){
		for(j=1;j<11;j++){
			if(i==1 || i==j || j==1){
			printf("%2d", i*j);
			}
			else{
			printf("  ");
			}
		}
		printf("\n");
	}
return 0;
}