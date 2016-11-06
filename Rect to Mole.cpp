#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
int main()
{
	double x,y,distance,theta,a=0,b=0;

	while (1)
	{
			cout<<"Enter theta in degree "<<'\n';
	cin>>theta;
	cout<<"Enter the distance "<<'\n';
	cin>>distance;
	if ((theta<0) || (distance<0) )
	break;
		else 
	x = a+distance*(sin(theta*PI/180));
	y = b+distance*(cos(theta*PI/180));
	cout<<x<<"\t"<<y<<'\n';
	a=x;
	b=y;
	}
}

