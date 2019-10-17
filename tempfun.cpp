#include<iostream>
using namespace std;

template<typename t>

t add(t x,t y)
{
	return(x+y);
}

int main()
{
cout<<"\n the addtion of 3 and 4 is: "<<add<int>(3,4);	
cout<<"\n the addtion of 3.5 and 4 is: "<<add<float>(3.5,4);	
}
