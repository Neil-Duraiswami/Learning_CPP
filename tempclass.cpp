#include<iostream>
using namespace std;

template<typename t>

class add
{
	t sum;    //sum is a variable of generic datatype t
	public:
	t addition(t a,t b)
	{
		sum=a+b;
		return(sum);
	}
	
};




int main()
{
	add <int>obj;
	cout<<"\n the addition of 3 and 4 is "<<obj.addition(3,4);
	return 0;
}
