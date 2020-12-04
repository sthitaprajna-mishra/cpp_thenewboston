#include<iostream>

using namespace std;

void printSomething(); //prototyping 

int main()
{
	printSomething();
	return 0;
}

void printSomething()
{
	cout << "called printSomething()" << endl;
}

