#include <iostream>
using namespace std;
int main ()
{
 int a=58,*p=&a,**q=&p;
 cout<<  a<<" ";	
 cout<<  *p<<" ";
 cout<<  **q<<" ";
}
