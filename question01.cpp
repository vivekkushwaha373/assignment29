#include<iostream>
using namespace std;
class Complex
{
int a;
public:
Complex()
{

}
Complex(int a)
{
    this->a=a;
}
void display()
{
    cout<<a;
}
};
int main()
{
    int x=5;
    Complex c1;
    c1=x;
    c1.display();

    return 0;
}