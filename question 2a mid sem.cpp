#include <iostream>
using namespace std;
int getarea(int r)
{
	int area;
	area=3.142*r*r;
	return(area);
}
int getcircumfrence (int r)
{
	int circumfrence;
	circumfrence=2*3.142*r;
	return(circumfrence);
}
int main()
{
	int r, area, circumfrence;
	cout<<"Radius: ";
	cin>>r;
	if (r>0)
	{
		area=getarea(r);
		circumfrence=getcircumfrence(r);
		cout<<"Area: "<<endl;
		cout<<"Circumfrence: "<<circumfrence<<endl;
	}
	else 
	{
		cout<<"Enter Value"<0;
	}
	return 0;
}

