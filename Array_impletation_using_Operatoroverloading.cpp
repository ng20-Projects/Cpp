#include<iostream>
using namespace std;

//Insert element in an array using "CONSTRUCTOR" and "OPERATOR OVERLOADING"

class A
{
	public:
		int N;
		void get()
		{
			cout<<"Enter the size of an Array"<<endl;
			cin>>N;
			int	arr[N];
			cout<<"Enter the array-> "<<endl;
		}
		A()
		{
			//operator +(A x);
		}
		
		int operator +(A x)
		{
			for(int i=0;i<N;i++)	
			{
				cin>>x.arr[i];
			}
		}	
};

int main()
{
	A x;
	x.operator +(x);
	x.get();
	
}
