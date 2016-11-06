#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s1=0;
	for(float n=1;n<=1000000;n++)
	s1+=1/(n*n);
	float forward=sqrt(6*s1);
	float s2=0;
	for(float m=1000000;1<=m;m--)
	s2+=1/(m*m);
	float backward=sqrt(6*s2);
	cout<<"s1= "<<s1<<'\n'<<"Forward= "<<forward<<'\n'<<"s2= "<<s2<<'\n'<<"Backward= "<<backward;
}
