#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int ar[] = {1,4,6,7,1,4,7};
	int p=0;
	for(int i=0;i<(sizeof(ar)/sizeof(ar[0]));i++)
	{
		p=p^ar[i];
	}
	cout<<p;
}
