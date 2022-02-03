#include<iostream>
using namespace std;
class Nik
{
	  public:
	  	int fact(int n);
};

int Nik::fact(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	Nik ng;
	int y;
//	cout<<"Enter the number you want to find the factorial: \n";
	cout<<ng.fact(5);
}
