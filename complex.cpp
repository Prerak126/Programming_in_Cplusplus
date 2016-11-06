#include<iostream>
using namespace std;
class complex {
	private:
		double real,imag;
	public:
		complex (): real(0),imag(0) {}
		complex (double r)
		{
			real=r;
			imag=0;
		}
		complex(double r, double i)
		{
			real=r;
			imag=i;
		}
		complex add(complex right) const
		{
			return complex();
		}
		void print()const
		{
			cout<<real<<"+"<<imag<<"i"<<'\n';
		}
};



int main() {
	const complex c1; // (real=0, imag =0)
	const complex c2(1.5);// real=1.5, imag = 0.0
	complex c3(1.5,2.25); // real = 1.5, imag=2.25

  c1.print(); // 0+0i
  c2.print();
	c3.print(); // 1.5+2.25i
	complex c4 = c1.add(c2); // (real=1.5, imag=0.0)
	c4.print();
}
