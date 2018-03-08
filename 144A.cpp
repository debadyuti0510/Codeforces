#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int max=a[0], min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
	
		}
		if(a[i]>max)
		{
			max=a[i];
			
		}
	}
	int count =0;

	int max_index, min_index;
	for(i=0; i<n; i++)
		if(a[i]==max)
		{
			max_index =i;
			break;
		}
	for(i=n-1; i>=0; i--)
		if(a[i]==min)
		{
			min_index =i;
			break;			
		}
//cout<<max_index<<' '<<min_index;
for(int i=0; i<2*n; i++)
{
	if(min_index==n-1 && max_index==0)
		break;
 
	if(min_index!=n-1)
	{
		int t = a[min_index];
		a[min_index]=a[min_index+1];
		a[min_index+1]=t;
		min_index++;
		count++;
		if(max_index == min_index)
			max_index--;
	}
	
	if(max_index!=0)
	{
		int t = a[max_index];
		a[max_index]=a[max_index-1];
		a[max_index-1]=t;
		max_index--;
		count++;
		if(max_index == min_index)
			min_index++;
	}
}

	cout<<count;
	return 0;
}
