/*#include <iostream>
using namespace std;
int main()
{
for(char r='C'; r>='A'; r--)
       {
     for(char c='A'; c<=r; c++)
         {
     cout<<c<<"\t";
         }
      cout<<"\n";
       }
}*/
//....................................................

 /*#include <iostream>
using namespace std;
int main()
{
for(char r='C'; r>='A'; r--)
       {
     for(char c='A'; c<=r; c++)
         {
     cout<<r<<"\t";
         }
      cout<<"\n";
       }
*/


/*#include <iostream>
using namespace std;
int main()
{for(int r=1; r<=3; r++)
{
    for(int c=1; c<=r; c++)
    {
        cout<<char(r+64)<<"\t";
    }
    cout<<"\n";
}

}*/

#include <iostream>
using namespace std;
int main()
{int n=0;
for(int r=1; r<=3; r++)
{
    for(int sp=3; sp>r; sp--)
    {
        cout<<" ";
    }
    for(int c=1; c<=r; c++)
    {
        n++;
        cout<<n;
    }
    cout<<"\n";
}

}
