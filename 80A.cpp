#include<iostream>
using namespace std;
int prime_check(int n)
{
	int divisor_count = 0;
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
			divisor_count++;
	}
	if(divisor_count)
		return 0;
	else
		return 1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int prev_prime=2;
	for(int i=2; i<=m; i++ )
	{
		if(prime_check(i)==1)
		{
			if(i!=m)
				prev_prime=i;
			else
			{
				if(prev_prime==n)
					{
						cout<<"YES";
						return 0;
					}
			}
		}
	}
	cout<<"NO";
	return 0;
}
