#include<iostream>
using namespace std;

class Nik
{
	public:
		int x[5];
		void get()
		{
			for(int i=0;i<5;i++)
			{
			cin>>x[i];
		    }
		}
		void sort()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5-i;j++)
				{
					if(x[j]<x[j+1])
					{
						int temp;
						temp=x[j];
						x[j]=x[j+1];
						x[j+1]=temp;
					}
				}
			}
		}
		void display()
		{
			for(int i=0;i<=5;i++)
			{
				cout<<"\n";
				cout<<x[i]<<"\n";
			}
		}
};

int main()
{
	Nik ng;
	ng.get();
	ng.sort();
	ng.display();
}
