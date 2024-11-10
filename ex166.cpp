#include<iostream>
using namespace std;
int main()
{
	
	int k;
	int a;
	int n_1=0;
	int n_5=0;
	int n_10=0;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>a;
		switch(a)
		{
			case 1:
				n_1++;
				break;
			case 5:
				n_5++;
				break;
			case 10:
				n_10++;
				break;
		}
	}
	cout<<n_1<<endl<<n_5<<endl<<n_10;
	return 0;
}
