#include<iostream>
using namespace std;
int yearcheck(int);
int main()
{
	int y;
	cin>>y;
	for(int next_year=y+1; ;next_year++)
	{
		if(yearcheck(next_year)==1)
			{
				cout<<next_year;
				break;
			}
	}
	return 0;
}

int yearcheck( int y)
{	int k = 0;
	int digits[4];
	int temp = y;
	while(temp)
	{
		digits[k++] = temp%10;
		temp/=10;
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i==j)
				continue;
			else
				if(digits[i]==digits[j])
					return 0;
		}
	}
	return 1;
	
}
