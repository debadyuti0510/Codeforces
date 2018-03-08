#include<iostream>
using namespace std;
int main()
{
	long long int s[4],temp[4];
	int count=4,k=0,flag=0;
	for(int i=0; i<4;i++)
	{
		cin>>s[i];
	}
	for(int i=0; i<4; i++)
	{
		flag=0;
		for(int j=0; j<k; j++)
			if(s[i]==temp[j])
				flag++;
		if(flag==0)
			temp[k++]=s[i];
	}
	cout<<count-k;
	return 0;
}
