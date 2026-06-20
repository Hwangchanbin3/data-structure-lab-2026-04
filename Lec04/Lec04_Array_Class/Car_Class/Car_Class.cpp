#include "Car_Class.h"

class SportsCar : public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedUp() {
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
	};

int main() {
	
	SportsCar myCar;

	myCar.setName ("Lamborghini");
	myCar.setTurbo(true);
	
	myCar.changeGear(5);
	myCar.speedUp();
	myCar.display();
	
	
	return 0;
}