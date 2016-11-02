#include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter n ";
	cin>>n;
	cout<<"Enter r ";
	cin>>r;

	double p=1;
	for( int i=1;i<=n;i++)
	p*=i;

	double q=1;
	for( int j=1;j<=r;j++)
	q*=j;


	double s=1;
	for(int k=1;k<=(n-r);k++)
	s*=k;

double x;
x=p/q/s;
cout<<"Permutations "<<x;
return 1;
}

