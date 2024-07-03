#include <iostream>
using namespace std;
int main()
{
for (int r=5;r>=1;r--)
{
for(int sp=5;sp>r;sp--)
{
cout<<" ";
}
for(int c=1;c<=r;c++)
{
cout<<"* ";    //change this line
}
cout<<"\n";
}



}
