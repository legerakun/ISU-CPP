#ifndef FUNC
#define FUNC
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include "desc.h"

Complex::Complex(double a, double b){
	real = a;
	imagine = b;
}

double Complex::ComplexModule(){
	double module = 0;
	module = sqrt(real*real + imagine*imagine);

	return module;
}

double Complex::ComplexArgument() {
	double argument = 0;
	argument = atan(imagine/real);

	return argument;
}

double Complex::outA(){
	return real;
}

double Complex::outB(){
	return imagine;
}
#endif FUNC
