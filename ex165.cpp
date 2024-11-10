#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	char d;
	int b;
	char e;
	int n=0;
	cin>>c>>a>>d>>b>>e;
	for(int i=a;i<=b;i++)
	{
		
		if(i%10==6&&i%3==0)
		{
			n+=1;
		}
	}
	cout<<n;
	return 0;
}
