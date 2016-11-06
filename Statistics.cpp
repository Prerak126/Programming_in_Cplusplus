#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	cout<<"Enter the numbers that you want in array ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"insert the value "<<i+1<<'\n';
	cin>>a[i];
    }
    int Maximum;
    int Minimum;
    Maximum=a[0];
    Minimum=a[0];
    int e=0;
    while (e<n)
    {
    	if(a[e]>Maximum)
    	{Maximum=a[e];
    }
    else if (a[e]<Minimum)
    {
    	Minimum=a[e];
	}
	   	e++;
    	
	}
	{

float sum, Mean, Avg, Total, Variance=0.0;
{
for(int f=0;f<n;f++)
{
    sum+=a[f];
}
Mean=sum/n;
for (int g=0;g<n;g++)
{
	Avg=(a[g]-Mean)*(a[g]-Mean);
	Total+=Avg;
}
Variance=Total/n;
cout<<"The Mean of the Array is "<<Mean<<'\n';
cout<<"Variance of the Array is "<<Variance<<'\n';
}
}
cout<<"The Maximum Value of Array is "<<Maximum<<'\n';
cout<<"The Minimum Value of Array is "<<Minimum<<'\n';

}
