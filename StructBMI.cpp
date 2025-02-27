#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// use of struct
struct BMIcalc {
	string username;
	string gender;
	string result;
	int age;
	int feet;
	double weight;
	double in;
	double bmi;
	double HeightInInches;
};

int main()
{
	BMIcalc person1; //Users info

	//get user info
	cout << "Enter your name: ";
	getline(cin, person1.username);

	cout << "Enter your Gender: "; 
	getline(cin, person1.gender);

	cout << "Enter your age: ";
	cin >> person1.age;

	cout << "Enter your height(ft only): ";
	cin >> person1.feet;

	cout << "Enter your height (in only): ";
	cin >> person1.in;

	cout << "Enter you weight: ";
	cin >> person1.weight;

	cin.ignore();

	//Calculations
	person1.HeightInInches = (person1.feet * 12) + person1.in; // to get height in feet

	person1.bmi = (person1.weight * 703) / pow(person1.HeightInInches, 2); // to calculate BMI

	//Categorize user
	if (person1.bmi < 16) {
		person1.result = "Severe Thinness";
	}
	else if (person1.bmi < 17) {
		person1.result = "Moderate thinness";
	}
	else if (person1.bmi < 18.5) {
		person1.result = "Mild thinness";
	}
	else if (person1.bmi < 25) {
		person1.result = "Normal";
	}
	else if (person1.bmi < 30) {
		person1.result = "Overweight";
	}
	else if (person1.bmi < 35) {
		person1.result = "Obese Class I";
	}
	else if (person1.bmi < 40) {
		person1.result = "Obese Class II";
	}
	else {
		person1.result = "Obese Class III";
	}

	//Display results
	cout << "Name: " << person1.username << endl;
	cout << "Gender: " << person1.gender << endl;
	cout << "Age: " << person1.age << endl;
	cout << "Height: " << person1.feet << "ft" << person1.in << "in" << endl;
	cout << "Weight: " << person1.weight << endl;
	cout << "Your BMI is: " << person1.bmi << " Which is considered " << person1.result;
	


	return 0;
}