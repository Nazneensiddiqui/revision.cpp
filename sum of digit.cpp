  #include <iostream>
  using namespace std;
  int main()
  {int c=0;
  int n;
  cout<<"enter any digit number\n";
  cin>>n;
 /* for(n;n>0;n=n/10)
  {
  c++;
  }
  cout<<"total digit="<<c;*/
  while(n>0)
  {
  c++;
  n=n/10;
  }
  cout<<"c="<<c;
  }

