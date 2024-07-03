              //logical operator is read only 0 and 1 zero is false and one is true
//( and operator &&=both are true) ( or operator ||= any one true) ( not operator != oposite)


  //relation operator it use for compression perpose
  //(1)> (2)< (3)=> (4)<= (5)!
#include <iostream>
using namespace std;
int main()
{int a,b;
a=8>8;
cout<<a<<"\n";
a=4>=4;
cout<<a<<"\n";
a=5<8;
cout<<a<<"\n";
a=5<=3;
cout<<a<<"\n";
a=9;
b=a!=9; cout<<"b="<<b;

}
