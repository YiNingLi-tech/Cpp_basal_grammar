#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b=0;
		cin>>a;
		for(int j=1;j<=a;j++)
		{
			for(int k=1;k<=j;k++)
			{
				b+=k;
			}
		}
		cout<<b<<endl;
	}
	return 0;
}
