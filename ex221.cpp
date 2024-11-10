#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n==1)
	{
		cout<<"No";
		return 0;
	}
	bool a=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a=false;
			cout<<"No";
			break;
		}
	}
	if(a)
	{
		cout<<"Yes";
	}
	return 0;
}
