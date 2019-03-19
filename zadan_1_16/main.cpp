#include<conio.h>
#include<stdio.h>
#include "desc.h"
#include "func_class.cpp"

int main(){
	double a, b, f, k, g, h;

	printf("Input a =");
	scanf("%lf", &a);
	printf("Input b =");
	scanf("%lf", &b);

	printf("%.3lf %.3lf\n", a, b);
	Complex d = Complex(a, b);

	f = d.outA();
	k = d.outB();
	g = d.ComplexModule();
	h = d.ComplexArgument();

	printf("Your complex number is %.3lf + %.3lfi\n", f, k);
	printf("Your module is %.3lf\n", g);
	printf("Your argument is %.3lf", h);

    getch();
}
