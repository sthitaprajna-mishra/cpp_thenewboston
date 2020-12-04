#include<iostream>

using namespace std;

void printStuff(int x);

int main()
{
	printStuff(20);
	return 0;
}

void printStuff(int x)
{
	cout << "Bucky's favourite number is " << x << endl;
}
