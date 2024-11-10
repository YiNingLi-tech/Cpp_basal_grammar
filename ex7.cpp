#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	printf("%10d\n",n);
	printf("%4s","+");
	printf("%6d\n",x);
	printf("-----------\n");
	printf("%10d",n+x);
	return 0;
}
