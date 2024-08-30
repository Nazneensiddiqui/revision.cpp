/*#include <iostream>
using namespace std;
int main()
{int num, a,b,c;
cout<<"enter three digit number\n";
cin>>num;
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
cout<<"sum of three digit number="<<a+b+c;
}*/

/*#include <iostream>
using namespace std;
int main()
{int base,power,r=1;
cout<<"enter base number\n";
cin>>base;
cout<<"enter power number\n";
cin>>power;
while(power>0)
    {
   r=r*base;
power--;
    }
  cout<<"result="<<r;
}*/

/*#include <iostream>
using namespace std;
int main()
{int n, s=0;
cout<<"enter any number\n";
cin>>n;
for(int i=1; i<n; i++)
   {
    if(n%i==0)
    {
    s=s+i;
    }
   }
   if(s==n)
      {
    cout<<"is a perfect no.="<<n;
      }
    else{
        cout<<"is not perfect no.="<<n;
    }

}*/

/*#include <iostream>
using namespace std;
int main()
{int n;
cout<<"enter any number";
cin>>n;
    for(int a=1; a<=10; a++)
    {
    cout<<n*a <<"\n";
    }


}*/


#include <iostream>
using namespace std;
int main()
{int n;
cout<<"enter number of weekday 1 to 7\n";
cin>>n;
    if(n==1)
    {
        cout<<"sunday";
    }
    else if(n==2)
    {
        cout<<"monday";
    }
    else if(n==3)
    {
        cout<<"tuesday";
    }
    else if(n==4)
    {
        cout<<"wednday";
    }
    else if(n==5)
    {
        cout<<"thusday";
    }
    else if(n==6)
    {
        cout<<"firday";
    }
    else if(n==7)
    {
        cout<<"seaterday";
    }
    else{
        cout<<"invalid number";
    }

}



