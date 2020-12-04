#include<iostream>

using namespace std;

int main()
{
	int age = 0, ageTotal = 0, numberOfPeopleEntered = 0;
	
	cout << "Enter person's age or -1 to quit" << endl;
	cin >> age;	
			
	while(age != -1){	
		ageTotal += age;
		numberOfPeopleEntered++;
		
		cout << "Enter person's age or -1 to quit" << endl;
		cin >> age;		
	}
	
	cout << "Number of people entered: " << numberOfPeopleEntered << endl;
	cout << "Average age: " << ageTotal/numberOfPeopleEntered;
	
	return 0;
}
