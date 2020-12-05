#include<iostream>

using namespace std;

int factorialFinder(int x);

int main()
{
	cout << factorialFinder(5) << endl;	
}

int factorialFinder(int x){
	if(x == 1){
		return 1;
	}
	return x*factorialFinder(x-1);
}
