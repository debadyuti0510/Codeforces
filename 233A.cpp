#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[100];
	if(n%2)
		cout<<-1;
	else if(n==2)
		cout<<2<<' '<<1<<' ';
	else
	{	cout<<2<<' '<<1<<' ';
		for(int i=3; i<n; i+=2)
		{
			cout<<i+1<<' '<<i<<' ';
		}
	}	
	return 0;
}
