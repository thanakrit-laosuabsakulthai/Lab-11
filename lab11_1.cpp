// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
// A, B+, B, C+, C, D+, D, F และ W

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string getRandomGrade() {
	string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
	int randomIndex = rand() % 9; // There are 9 possible grades
	return grades[randomIndex];
}

void setupRandomSeed() {
	srand(time(0));
}

int main() {
	setupRandomSeed();
	

	
	cout << "Press Enter 3 times to reveal your future." << endl;
	
	for (int i = 0; i < 3; i++) {
		cin.get(); // Wait for Enter
	}
	
	string futureGrade = getRandomGrade();
	cout << "You will get " << futureGrade << " in this 261102." << endl;
	
	return 0;
}























