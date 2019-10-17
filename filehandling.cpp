#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[50];
	cout<<"\n Enter your name into the file \n";
	cin.getline(arr,50);
	ofstream output;
	output.open("xyz.txt");
	output<<arr;
	output.close();
	cout<<"\n performed the operation \n";
	ifstream input;
	input.open("xyz.txt");
	char arr1[50];
	cout<<"\n the data in ur file is \n";
	input.getline(arr1,50);
	cout<<arr1;
	input.close();
}
