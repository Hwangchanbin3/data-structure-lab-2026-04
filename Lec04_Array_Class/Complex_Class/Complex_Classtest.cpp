#include "Complex_Class.h"

int main() {
	Complex a, b, c;
	a = readComplex("A = ");
	b = readComplex("B = ");
	c = addComplex(a, b);
	printComplex(a, "A = ");
	printComplex(b, "B = ");
	printComplex(c, "C = ");
	
	return 0;

}