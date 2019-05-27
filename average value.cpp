#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n,t=0,a=0;
	for(int n=0;n!=9999;cin>>n,a++)
	{
		t=t+n;
	}
	cout<<fixed<<setprecision(2)<<t/(a-1);
 } 
