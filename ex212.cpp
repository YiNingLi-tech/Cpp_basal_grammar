#include<iostream>
using namespace std;
int main()
{
	int n,a=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i%10!=7&&i/10!=7&&i%7!=0)
		{
			a+=i*i;
		}
	}
	cout<<a;
	return 0;
}
