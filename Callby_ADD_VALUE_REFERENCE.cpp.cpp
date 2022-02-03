#include<iostream>
using namespace std;
class ABC
{
	public:
		void Sum(int *a,int*b)
		{
			cout<<*a+*b;
		}
};

int main()
{
	ABC x;
	int c,d;
	cout<<"Enter First Value: ";
	cin>>c;
	cout<<"Enter Second Value: ";
	cin>>d;
	x.Sum(&c,&d);
	
	return 0;
}
