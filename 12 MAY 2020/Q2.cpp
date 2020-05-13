#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B,i;
	cout<<"enter values of A and B:"<<endl;
	cin>>A>>B;
    for(i=1;i<=A && i<=B;i++)
	{
		if(A%i == 0 && B%i == 0)
		{
			cout<<"gcd="<<i<<endl;
		}
	}	
}
