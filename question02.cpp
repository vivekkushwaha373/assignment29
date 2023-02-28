#include<iostream>
using namespace std;
class Complex
{
int a,b;
public:
void setData(int a,int b)
{
 this->a=a;
 this->b=b;
}
operator int()
{
return a+b;
}
};
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
cout<<x;
return 0;
}