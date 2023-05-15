#include<iostream>

using namespace std;

class nest
{
	int a;
	int sq_num()
	{
		return a * a;
	}
	public:
	void input_num()
	{
		cout <<"\n Enter the number ";
		cin >> a;
	}
	int cube_num()
	{
		return a*a*a;
	}
	void display_num()
	{
		int sq=sq_num(); //nesting of member function
		int cu=cube_num();

		cout <<"\n The square of "<<a<<" is " <<sq;

		cout << "\n The cube of "<<a<<" is " << cu << endl;
	}
};

int main()
{
	nest n;
	n.input_num();
	n.display_num();

	return 0;
}
