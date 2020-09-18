#include <iostream>
#include <string>

using namespace std;

class Student {
	string name;
	public:
		Student(string n) {
			name = n;
		}

		Student() {
			name = "unknown";
		}

		void printName() {
			cout << name << endl;
		}
};

int main(){
	Student a( "Test For Constructor!" );
	Student b;
	a.printName();
	b.printName();
	
	system.pause();
	return 0;
}