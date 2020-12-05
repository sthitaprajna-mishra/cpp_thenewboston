#include<iostream>

using namespace std;

void printArray(int arr[], int length);

int main()
{
	int tuna[5] = {4, 6, 3, 9, 2};
	printArray(tuna, 5);
}

void printArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		cout << arr[i] << endl;
	}
}
