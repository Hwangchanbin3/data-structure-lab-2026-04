#define MAX_DEGREE 80
#include <cstdio>

class Polynomial {
	int degree;
	float coef[MAX_DEGREE];

public:
	Polynomial() :degree(0), coef{}{}

	void read() {
		printf("다항식의 최고 차수를 입력하시오: ");
		scanf_s("%d", &degree);
		printf("각 항의 걔수를 입력하시오 (총 %d개): ", degree + 1);
		for (int i = 0; i <= degree; i++)
		scanf_s("%f", coef + i);

	}

	void display(const char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d +", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);

}
	

};

int main() {
	Polynomial p;
	p.read();
	p.display();
	return 0;
}