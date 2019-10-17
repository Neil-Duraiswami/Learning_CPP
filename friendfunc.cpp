#include<iostream>
using namespace std;
class addition
{
	int a,b,sum;
	public:
		addition()
		{
		a=0;
		b=0;
		sum=0;
		}
		void ip()
		{
			cout<<"\n Enter 2 no.s to be added:\n";
			cin>>a;
			cout<<endl;
			cin>>b;
		}
		void display()
		{
			cout<<"\n the value of addition is : "<<sum;
		}
	
	friend void add(addition &obj);     //friend function prototype
	
};

void add(addition &obj)
{
	obj.sum=obj.a+obj.b;
}

int main()
{
	addition obj1;
	obj1.ip();
	cout<<"\n before friend function :::: \n";
	obj1.display();
	add(obj1);
	cout<<"\n after friend function :::: \n";
	obj1.display();
	
}
