#include<iostream>

using namespace std;

class BuckysClass
{
	public:
		void coolSaying()
		{
			cout << "identity theft is not a joke JIM!" << endl;
		}
	
};


int main()
{
	BuckysClass buckysObject;
	
	buckysObject.coolSaying();
	
	return 0;
}
