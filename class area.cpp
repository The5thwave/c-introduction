#include <iostream>
using namespace std;
class multiply
{
	public:
		void area ()
		{
			int num1, num2, multiply;
			num1 = 20;
			num2 = 30;
			multiply = num1*num2;
			cout<<"The answer is: "<<multiply<<endl;
		}
};
int main ()
{
	//Instansiation or Creating object
	multiply m;
	m.area();
	return(0);
}
