#include<iostream>
#include<string>
using namespace std;

class BuckysClass{
	private:
		string name;
	public:
		void setName(string x){
			name = x;			
		}
		string getName(){
			return name;
		}
				
};

int main()
{
	BuckysClass bo;
	
	bo.setName("Bucky Roberts");
	cout << bo.getName() << endl;
	
	return 0;
}
