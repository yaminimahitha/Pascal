#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,s,j,c;
	int n=5;
	for(i=0;i<n;i++)
	{
		for(s=1;s<n-i;s++)
		cout<<" ";
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			c=1;
			else
				c=(c*(i-j+1))/j;				
			cout<<c<<" ";
		   		}
		   		cout<<endl;
	}
}
