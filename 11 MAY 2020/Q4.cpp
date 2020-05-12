#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int A,i,j;
	cout<<"enter A:";
	cin>>A;
	int arr[A][A];
	for(i=0;i<A;i++)
	{
		for(j=0;j<A;j++)
		{
			arr[i][j]=0;
		}
	}
		for(i=0;i<A;i++)
	{
		for(j=0;j<A;j++)
		{
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	
	for(i=0;i<A;i++)
	{
		arr[i][0]=1;
	}
		for(i=1;i<A;i++)
	   {
		for(j=1;j<A;j++)
		{
			if(i>=j)
			{
				if(i==j)
				{
					arr[i][j]=arr[i][j-1];
				}
				else
				{
					arr[i][j]=arr[i][j-1]+arr[i-1][j];
				}
			}
		}		
	}
	cout<<"new matrix"<<endl;
		for(i=0;i<A;i++)
	{
		for(j=0;j<A;j++)
		{
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<"total ways:"<<arr[A-1][A-1]<<endl;
}
