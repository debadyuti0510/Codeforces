#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int count=0;
	cin>>a>>b>>c;
	a+=b;
	for(int i=0; i<a.length(); i++)
	{
		for(int j=0; j<c.length();j++)
		if(a[i]==c[j])
		{
			c.erase(j,1);
			count++;
			break;
		}
		
	}
	if(count==a.length() && c.length()==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
	
}
