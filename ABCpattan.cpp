/*#include <iostream>
using namespace std;
int main()
{
for(int r=1; r<=3; r++)
       {
     for(int c=1; c<=r; c++)
         {
     cout<<char(c+64)<<"\t";
         }
      cout<<"\n";
       }
}*/

#include <iostream>
using namespace std;
int main()
{
for(int r=1; r<=3; r++)
       {
     for(int c=1; c<=r; c++)
         {
     cout<<char(r+64)<<"\t";
         }
      cout<<"\n";
       }
}
