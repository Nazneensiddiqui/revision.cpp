#include <iostream>
using namespace std;
int main ()
{int a=200;
int &b=a;
b=100;
cout<<"address of a="<<&a<<"\n";
cout<<"address of b="<<&b<<"\n";
cout<<"value of a="<<a<<"\n";
cout<<"value of b="<<b<<"\n";


}
