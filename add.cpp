#include <iostream>
using namespace std;
int add(int y, int x){
	int sum;
	sum=y+x;
	return sum;
	
}
int main (){
	int x,y,z;
	x=6;
	y=5;
	z=add(y,x);
	cout<<"Sum is: \n"<<z<<endl;
}
