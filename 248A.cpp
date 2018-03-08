#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int l[10000],r[10000];
	int l_count=0, r_count=0,count=0;
	for(int i=0; i<n; i++)
	{
		cin>>l[i]>>r[i];
		if(l[i]==1)
			l_count++;
		if(r[i]==1)
			r_count++;
	}
	if(l_count>n/2)
		l_count=1;
	else
		l_count=0;
	if(r_count>n/2)
		r_count=1;
	else
		r_count=0;
	for(int i=0; i<n; i++)
	{
		if(l[i]!=l_count)
		{
			l[i]=l_count;
			count++;
		}
		if(r[i]!=r_count)
		{
			r[i]=r_count;
			count++;
		}
	}
	cout<<count;
	return 0;
}
