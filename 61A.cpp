#include <iostream>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;

int main()
{
    string a,b,c;
    int i,k=0;
    cin>>a>>b;
    //cout<<a<<endl<<b;
    for( i=0; i<a.length(); i++)
    {
        if(a[i]==b[i])
        {
        	c+='0';
		}
        else
            c+='1';
    }
	cout<<c;
    return 0;
}

