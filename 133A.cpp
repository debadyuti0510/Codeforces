#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string input;
	cin>>input;
	int flag=0;
	for(int  i=0; i<input.length(); i++)
		if(input[i]=='H' || input[i]=='Q' || input[i]=='9' )
			flag=1;
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
