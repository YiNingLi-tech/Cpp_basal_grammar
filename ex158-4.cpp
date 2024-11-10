#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	int max;
	int min;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		switch(i)
		{
			case 0:
				max=x;
				min=x;
				break;
			default:
				max=x>max?x:max;
				min=x<min?x:min;
//				if(x>max)
//				{
//					max=x;
//				}
//				if(x<min)
//				{
//					min=x;
//				} 
				break;
	   	}
	}

	cout<<max<<" "<<min;
	return 0;
}
