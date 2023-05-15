#include<iostream>
using namespace std;

class car
{
	private:
		int car_id;
		char car_name[20];
		int marks;

	public:
		static int static_mem;

		car()
		{
			static_mem++;
		}

		void input()
		{
			cout<<"\n Enter the id of the car :"<<endl;
			cin>>car_id;
			cout<<"Enter the name of the car:"<<endl;
			cin>>car_name;
			cout<<"Number of marks "<<endl;
			cin>>marks;
		}

		void display()
		{
			cout <<"\n id of car :"<<car_id<<endl;
			cout <<"name of the car:"<<car_name;
			cout <<"\nmarks :"<<marks;
		}

	}
};

int main()
{
	car c1;
	c1.input();
	c1.display();
	cout << " \n No. of objects created in the class: " << car :: static_mem <<endl;

