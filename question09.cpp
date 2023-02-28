#include<iostream>
using namespace std;
class Dollar
{
int doller;
public:
Dollar(){}
Dollar(int y)
{
doller=y;
}

void display()
{
 cout<<doller;   
}
};

int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}