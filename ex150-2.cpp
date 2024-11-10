#include<iostream>
using namespace std;
long long factorial(int n)
{
	long long a=1;
	for(int i=1;i<=n;i++)
	{
		a*=i;
	}
	return a;
}
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n);
	return 0;
}
