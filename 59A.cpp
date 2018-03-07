#include<iostream>
#include<bits/stdc++.h>
#include<cctype>


using namespace std;

int main()
{
	int u_count=0, l_count=0;
	string str;
	cin>>str;
	for(int i=0; i<str.length(); i++)
	{
		if(isupper(str[i]))
			u_count++;
		else 
			l_count++;
	}
	for(int i= 0; i<str.length(); i++)
		if(l_count>u_count || l_count == u_count)
			str[i]=tolower(str[i]);
		else if(u_count>l_count)
			str[i]=toupper(str[i]);
	cout<<str;
	return 0;
}
