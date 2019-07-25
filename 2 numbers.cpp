#include <iostream>
using namespace std;
int main()
{
	int number, num1, num2;
	cout<<"\t\t****Comparing numbers****\n";
	cin>>number;
	switch(number)
	{
		case 1:
			cout<<"\n Enter first number: "<<endl;
			cin>>num1;
			cout<<"\n Enter second number: "<<endl;
			cin>>num2;
			cout<<"num1 is equal to num2"<<num1=num2;
			break;
		default:
			cout<<"\n Please enter a valid choice";
			
	}
	return 0;
}
	
	
