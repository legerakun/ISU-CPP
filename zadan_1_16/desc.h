#ifndef DESC
#define DESC

class Complex {
	private:
		double real;
		double imagine;
	public:
		Complex(double a, double b);
		double ComplexModule();
		double ComplexArgument();
		double outA();
        double outB();
};
#endif DESC
