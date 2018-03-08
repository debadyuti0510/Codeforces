#include<iostream>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np,slices;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	slices = c*d;
	int min;
	min=k*l/nl;
	if(min>slices)
		min=slices;
	if(min>p/np)
		min=p/np;
	min/=n;
	cout<<min;
	return 0;
	
	
}
