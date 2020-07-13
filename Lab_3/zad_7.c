#include<stdio.h>
#include<math.h>
int main(void){
	int max, n, i, j;
	int a=0;
	scanf("%d", &max);
	for(i=1; i<=max; i++){
		n=sqrt(i);
		for(j=1; j<=n; j++){
			if(i%j==0){
			a+=1;
			}
		}
		if(a==1 && i!=1){
		printf("%d\n", i);
			}
		a=0;
	}
return 0;
}