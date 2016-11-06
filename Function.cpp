#include<iostream>
using namespace std;

	double mean (int values[], int valuesnum){
		double s=0;
		valuesnum=3;
		for(int i=0;i<valuesnum;i++){
			s+=values[i];
			
		}
		return s/3;
	}
	double f(int values[], int valuesnum) {
		double s=0;
		valuesnum=3;
		for(int i=0;i<valuesnum;i++){
			s+=values[i];
		}
		return s;
	}


int main()
{
	int valuesnum=5;
	int values[5]= {1,2,3,4,5};
	
	f(values, valuesnum);
	cout<<"After 'f' is called, valuesnum equals= "<<valuesnum<<'\n';
	cout<<"'f' function returns= "<<f(values, valuesnum)<<'\n';
	cout<<"After mean is called, valuesnum= "<<valuesnum<<'\n';
	cout<<"Average of the array "<< mean(values, valuesnum)<<'\n'; 
}
