#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a ";
	cin>>a;
	int n=a;
	while ( n != 1 ) 
	{
    if ( n % 2 == 1 ) 
	{
        n = 3 * n + 1;
    
        cout<<n<<'\n';
    }
    else
	{
        n /= 2;
        cout<<n<<'\n';
    }
}
}

