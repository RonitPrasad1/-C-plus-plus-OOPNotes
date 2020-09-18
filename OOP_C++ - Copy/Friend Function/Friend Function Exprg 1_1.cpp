#include <iostream>

using namespace std;

class Temperature {
	const int *celsius;
	public:
		Temperature(NULL) { //Constructor
	~Temperature(); //Destructor
			celsius = 0;
		}
		friend int temp(Temperature);   // declaring friend function
};

int temp(Temperature t) {    // friend function definition
	t.celsius = 40;
	return t.celsius;
}

int main() {
	Temperature tm;
	cout << "Temperature in celsius: " << Temp(tm) << endl;

	system.pause();
	return 0;
}