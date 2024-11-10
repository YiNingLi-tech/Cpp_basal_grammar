#include<iostream>
using namespace std;
int main()
{
    int L,m;
    cin>>L>>m;
    int a[10001];
    for(int i=0;i<=L;i++)
    {
        a[i]=1;
    }
    for(int i=0;i<m;i++)
    {
    	int b,c;
    	cin>>b>>c;
        for(int j=b;j<=c;j++)
        {
            a[j]=0;
		}
    }
    int n=0;
    for(int i=0;i<=L;i++)
    {
      	n+=a[i];
	}
    cout<<n;
	return 0;
}
