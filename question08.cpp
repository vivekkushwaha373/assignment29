#include<iostream>
using namespace std;

class Rupee
{
int rupee;
public:

Rupee(int y)
{
rupee=y;
}
operator int()
{
    return rupee;
}

};
int main()
{

Rupee r=10;//it can also be written like:Rupee r=Rupee(10); 

int x = r;
cout<<x;
return 0;
}