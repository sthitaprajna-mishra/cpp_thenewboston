#include<iostream>

using namespace std;

int addNumbers(int x, int y);

int main()
{
	int result = addNumbers(5, 6);
	cout << result << endl;
	return 0;
}

int addNumbers(int x, int y)
{
	int answer = x + y;
	return answer;
}
