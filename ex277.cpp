#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int xi[15];
	for(int i=0;i<n;i++)
	{
		cin>>xi[i];
	}
	int a=xi[0]+xi[1]+xi[2],b=0; 
	for(int i=0;i<n-3;i++)
	{
		if(a<xi[i+1]+xi[i+2]+xi[i+3])
		{
			a=xi[i+1]+xi[i+2]+xi[i+3];
			b=i+1;
		}
	}
	cout<<b+1<<" "<<b+2<<" "<<b+3;
	return 0;
}
