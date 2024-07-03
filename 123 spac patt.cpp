#include <iostream>
using namespace std;
int main()
{ int n=0;
for (int r=1;r<=3;r++)
{
for(int sp=3;sp>r;sp--)
{
cout<<" ";
}
for(int c=1;c<=r;c++)
{
    n++;
cout<<n;    //change this line
}
cout<<"\n";
}



}
