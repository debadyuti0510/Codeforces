#include <iostream>

using namespace std;

int toggle(int a)
{
    if(a==0)
    return 1;
    else
    return 0;
}
int main()
{
    int matrix[3][3], output[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>matrix[i][j];
            output[i][j]=1;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(matrix[i][j]%2)
            {
                output[i][j]=toggle(output[i][j]);
                if(j<2)
                output[i][j+1]=toggle(output[i][j+1]);
                if(j>0)
                output[i][j-1]=toggle(output[i][j-1]);
                if(i<2)
                output[i+1][j]=toggle(output[i+1][j]);
                if(i>0)
                output[i-1][j]=toggle(output[i-1][j]);

            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<output[i][j];
            
        }
        cout<<endl;
    }
    return 0;
}
