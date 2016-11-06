#include<iostream>
using namespace std;
class complex {
	private:
		double real,imag;
	public:
		complex(double real, double imag): real(real),imag(imag) {}
	
	   friend complex operator +(complex a, complex b) {
		    complex ans(a.real+b.real,a.imag+b.imag);
		 	return ans;
		}
		 	friend complex operator -(complex a, complex b) {
			complex ans (a.real-b.real,a.imag-b.imag );
			return ans;
		}
		
		friend complex operator *(complex a, complex b) {
			complex ans ((a.real*b.real)-(a.imag*b.imag),(a.imag*b.real)+(a.real*b.imag));
			return ans; 
	    }
		    friend ostream& operator<<(ostream&s, complex f) {
		 	return s<<f.real<<"+"<<f.imag;
	    }
};




int main() {
	const complex c1(0.0,0.0); // (real=0, imag =0)
	const complex c2(1.5,0.0);// real=1.5, imag = 0.0
	complex c3(1.5,2.25); // real = 1.5, imag=2.25

  cout<<"c1= "<<c1<<'\n'<<"c2= "<<c2<<'\n'<<"c3= "<<c3<<'\n';
  //c2.print();
	//c3.print(); // 1.5+2.25i
	complex c4 = c3+c2; // (real=1.5, imag=0.0)
	cout<<"c3+c2 = "<<c4<<'\n';
	complex c5=c3-c2;
	cout<<"c3-c2 = "<<c5<<'\n';
	complex c6=c2*c3;
	cout<<"c2*c3 = "<<c6<<'\n';
}
