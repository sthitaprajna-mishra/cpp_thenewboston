#include<iostream>

using namespace std;

int main()
{
	int bucky[5] = {66, 75, 2, 43, 99};
	
	cout << bucky << endl;
	
	int cool[5];
	
	for(int i = 0; i < 5; i++){
		cout << "enter element at index " << i << ": ";
		cin >> cool[i];
	}
	
	for(int i = 0; i < 5; i++){
		cout << cool[i] << endl;
	}
}
