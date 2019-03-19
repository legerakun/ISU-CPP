#include<conio.h>
#include<stdio.h>
#include "desc.h"
#include "func_class.cpp"

int main(){
	double a, b, c, p;

	printf("Input a =");
	scanf("%lf", &a);
	printf("Input b =");
	scanf("%lf", &b);

	printf("%.3lf %.3lf\n", a, b);

	printf("Input c =");
	scanf("%lf", &c);
	printf("Input d =");
	scanf("%lf", &p);

	printf("%.3lf %.3lf\n", c, p);

	Complex x(a, b), y(c, p), q, w, e;

	q = x + y;
	w = x - y;
	e = x * y;

	printf("Summ is %.3lf.%.3lfi\n", q.real, q.imagine);
	printf("Razn is %.3lf.%.3lfi\n", w.real, w.imagine);
	printf("Umnoj is %.3lf.%.3lfi\n", e.real, e.imagine);

    getch();
}
