#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	int p[100];
	float out=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
		out+=p[i];
	}
	cout<<std::fixed<<std::setprecision(12)<<out/n;
	return 0;
}
