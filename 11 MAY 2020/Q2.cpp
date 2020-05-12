#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[] = {9,5,3};
	int min=0;
	int XOR=0;
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
		for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]));j++)
		{
			XOR = (arr[i])^(arr[j]);
			if(XOR<min)
			{
				min=XOR;
			}
		}
	}
	cout<<XOR;
}
