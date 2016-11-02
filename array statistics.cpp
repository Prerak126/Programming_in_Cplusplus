#include <iostream>
using namespace std;

void printGrades(const int g[], int n) {
	cout << "SIZEOF my parameter: " << sizeof(g) << '\n';
	for (int i = 0; i < n; i++)
		cout << g[i] << ' ';

}
	double Mean (const int g[], int l){
		double s=0;
		l=3;
		for(int i=0;i<l;i++){
			s+=g[i];
			
		}
		return s/3;
	}
		double f(const int g[], int l) {
		double s=0;
		l=3;
		for(int i=0;i<l;i++){
			s+=g[i];
		}
		return s;
	}

		
	

int main() {
	const int gr[] = { 95, 80, 90, 65, 93 };
	cout << "SIZEOF my array: " << sizeof(gr) << "\n";
	const int n= sizeof(gr)/sizeof(int);	
	printGrades(gr,n);
	cout<<"Mean= "<<Mean(gr,n)<<"\n";
	double mean;
	int max, min;

	
}


	
