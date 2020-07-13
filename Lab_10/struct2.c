#include<stdio.h>
#include<math.h>

struct algebraiczna {
	double re;
	double im;
};

struct wykladnicza {
	double modul;
	double argument;
};

void zamien(struct algebraiczna *zesp_a, struct wykladnicza *zesp_w){
	zesp_w->argument=sqrt((zesp_a->re)*(zesp_a->re)+(zesp_a->im)*(zesp_a->im));
	zesp_w->modul=sin(zesp_a->im/zesp_a->re);
	return;
}

int main(void){

struct algebraiczna zesp_a;
struct wykladnicza zesp_w;
scanf("%lf", &zesp_a.re);
scanf("%lf", &zesp_a.im);
zamien(&zesp_a, &zesp_w);
printf("%f, %f\n", zesp_w.argument, zesp_w.modul);
return 0;
}