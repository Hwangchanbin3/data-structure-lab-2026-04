#include "Complex_Class.h"

int main() {
	Complex a, b, c;
	a = readComplex();
	b = readComplex("B = ");
	c = addComplex(a, b);
	printComplex(a);
	printComplex(b, "B = ");
	printComplex(c, "C = ");
	
	return 0;

}