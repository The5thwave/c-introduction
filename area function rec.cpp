#include <iostream>
using namespace std;
int multiply (int a, int b)
{
	int multiply;
	multiply=a*b;
	return(multiply);
}

int main ()
{
	int z,a,b;
	a=2;
	b=6;
	z=multiply(a,b);
	cout<<"The area is: "<<z;
}
