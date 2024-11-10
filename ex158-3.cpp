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
		if(i==0)
		{
			max=x;
			min=x;
		}
		else
		{
			if(x>max)
			{
				max=x;
			}
			if(x<min)
			{
				min=x;
			}
		}
		
	}

	cout<<max<<" "<<min;
	return 0;
}
