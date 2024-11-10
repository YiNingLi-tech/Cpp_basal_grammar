#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int m;
	int n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(i%2==1)
		{
			a+=i;
		}
	}
	cout<<a;
	return 0;
}
