#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	char c;
	cin>>a>>b>>c;
	switch(c)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			if(b==0)
			{
				cout<<"Error!";
			}
			else
			{
				cout<<a/b;
			}
			break;
	}
	return 0;
}
