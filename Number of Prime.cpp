#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int x=0,count=0;
		cout<<"Enter a ";
		cin>>a;
		cout<<"Enter b ";
		cin>>b;
	
for (int i=a;i<=b;i++) 
	{
	
		for (int j = 2; j <= i/2 ; j++)
		{
		if (i%j ==0)
		x++ ;
	}
	if(x==0 && i !=1)
	{
		count++;
		cout<<"Prime numer "<<i<<'\n';
		x=0;
	}
	x=0;}
	cout<<"Number of Primes in the range "<<a<<" to "<<b<<" === "<<count;
}


