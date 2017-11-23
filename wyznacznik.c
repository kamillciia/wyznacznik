#include <stdio.h>
void wczytaj{double *a1, double *b1, double *c1, double *a2, double *b2, double *c2){
	puts("podaj wspolczynnik a1");
        scanf("%lf",a1);
        puts("podaj wspolczynnik b1");
        scanf("%lf",b1);
        puts("podaj wspolczynnik c1");
        scanf("%lf",c1);
        puts("podaj wspolczynnik a2");
        scanf("%lf",a2);
        puts("podaj wspolczynnik b2");
        scanf("%lf",b2);
        puts("podaj wspolczynnik c2");
	scanf("%lf",c2);
}
	
int main(){

	double a1,b1,c1,a2,b2,c2;
	
	wczytaj(&a1, &b1, &c1, &a2, &b2, &c2);

	return 0;
}
