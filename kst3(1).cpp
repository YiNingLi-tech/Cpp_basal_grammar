#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,y;
	cin>>n>>y;
	if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
	{
		cout<<"31";
	}
	else if(y==4||y==6||y==9||y==11||y==12)
	{
		cout<<"30";
	}
	else
	{
		if(n%4==0&&n%100!=0)
		{
			cout<<"29";
		}
		else if(n%400==0)
		{
			cout<<"29";
		}
		else
		{
			cout<<"28";
		}
	}
	return 0;
}
