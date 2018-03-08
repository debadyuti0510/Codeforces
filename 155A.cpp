#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[1000];
	cin>>n;
	int count=0, min,max;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(i==0)
		{
			min=a[i];
			max=a[i];
		}
		else
		{
			if(a[i]>max)
			{
				max=a[i];
				count++;
			}
			if(a[i]<min)
			{
				min=a[i];
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
