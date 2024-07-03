#include <iostream>
using namespace std;
/*int b=100;//-globel value ::
int main()
{int b=9;//-local value
cout<<"b="<<::b;
}*/

/*int main()
{int b=9;//size print karta he.
cout<<"b="<<b<<"\n";
cout<<"bytes="<<sizeof(b);
}*/

int main()
{int a=200;
int b=a;//& address batata he
cout<<"a="<<&a<<"\n";
cout<<"b="<<&b<<"\n";
}
