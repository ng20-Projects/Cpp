//WAP to take input of an ARRAY and find whether the ARRAY is sorted or not? If it is then sort the ARRAY And if it is not then forcefully terminated the program

#include<iostream>
using namespace std;

class Array
{
	public:
			
		int arr[10];
		void get()
		{
			for(int i=0;i<10;i++)
			{
				cin>>arr[i];
			}
		}
		
		void check()
		{
			int count=0;
			for(int i=0;i<10;i++)
			
				if(arr[i]>arr[i+1])
				{
					count++;
				}
			}
			if(count>0)
			{
				cout<<"Array is not Sorted";
			}
			if(count<0)
			{
				cout<<"Array is Sorted";
				exit(0);
			}
		}
};

int main()
{
	Array x;x
	x.get();
	x.check();
}


