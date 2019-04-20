#include <cstdio>

struct Complex {
	double real;
	double imaginary;
};

void printComplex(Complex c, const char* message = "���Ҽ�") {
	printf("%s %4.2f + %4.2fi\n", message, c.real, c.imaginary);
}

Complex readComplex(const char* message = "���Ҽ�") {
	Complex c;

	printf("%s", message);
	scanf_s("%lf%lf", &c.real, &c.imaginary);

	return c;
}

Complex addComplex(Complex a, Complex b) {
	Complex c;

	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;

	return c;
}

void resetComplex(Complex a) {
	a.real = a.imaginary = 0.0;
}

int main() {
	Complex a;
	Complex b;
	Complex c;

	a = readComplex("a(�Է�) = ");
	b = readComplex("b(�Է�) = ");
	c = readComplex("c(�Է�) = ");
	c = addComplex(a, b);
	printComplex(a, " a = ");
	printComplex(b, " b = ");
	printComplex(c, " a + b = ");
	resetComplex(c);
	printComplex(c, "reset(c) = ");
}