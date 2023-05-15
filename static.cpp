#include<iostream>
using namespace std;

class my_static
{
	static int x;
	public:
	int get_static()
	{
		return x;
	}
};

int my_static::x=5;

int main()
{
	my_static a;
	cout << "value is "<< a.get_static() <<endl;
	return 0;
}
