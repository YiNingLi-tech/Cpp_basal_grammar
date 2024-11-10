#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	char c;
	cin>>a>>b>>c;
	if(c=='+')
	{
		cout<<a+b;
	}
	else if(c=='-')
	{
		cout<<a-b;
	}
	else if(c=='*')
	{
		cout<<a*b;
	}
	else
	{
		if(b==0)
		{
			cout<<"Error!";
		}
		else
		{
			cout<<a/b;
		}
	}
	return 0;
}
