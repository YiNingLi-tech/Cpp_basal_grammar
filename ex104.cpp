#include<iostream>
using namespace std;
int main()
{
	int h1;
	int h2;
	int a;
	int b=0;	
	cin>>h1>>h2;	
	for(int i=0;i<3;i++)
	{
		cin>>a;
		if(h1>=a&&a>=h2)
		{
			b++;
		}
	}
	if(b!=0)
	{
		cout<<b;
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}
