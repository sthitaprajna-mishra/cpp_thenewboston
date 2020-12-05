#include<iostream>

using namespace std;

void printNumber(int x);
void printNumber(float x);

int main()
{
	int a = 54;
	float b = 32.4892;
	
	printNumber(a);
	printNumber(b);
}

void printNumber(int x){
	cout << "i am printing an integer " << x << endl;
}

void printNumber(float x){
	cout << "i am printing a float " << x << endl;
}
