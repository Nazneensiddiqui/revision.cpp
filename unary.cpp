/* unary operator- 1 oprean = 1. increment 2. decrement
increment- post-increment (a++)
           pre-increment  (++a)
decrement- post-decrement (a--)
           pre-decremnet  (--a)*/
#include <iostream>
using namespace std;
int main()
{int a=8,b;
//b=a++;
//b=++a;
//b=a--;
b=--a;
cout<<"a="<<a<<"\n";
cout<<"b="<<b<<"\n";
}
