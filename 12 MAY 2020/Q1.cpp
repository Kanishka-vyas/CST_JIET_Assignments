#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B,C,i;
	int count=0;
	cout<<"enter values of A,B and C:"<<endl;
	cin>>A>>B>>C;
	for(i=1;i<=A;i++)
	if(i%B ==0 && i%C==0)
	{
		cout<<i <<" is special integer"<<endl;
		count++;
	}
	cout<<"num of special integers is:"<<count;
}
