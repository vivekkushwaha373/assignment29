#include<iostream>
using namespace std;
class Rupee
{
int rupee;
public:
Rupee(){}
Rupee(int x)
{
rupee=x;
}

float r()
{
    return rupee*1.0/100;
}
void setdata(int y)
{
    rupee=y;
}
void display()
{
cout<<"rupee: "<<rupee<<endl;
}
};
class Dollar
{
float doller;
public:

Dollar(Rupee s1)
{
doller=s1.r();
}
void display()
{
    cout<<"doller: "<<doller<<endl;
}
operator Rupee()
{
    Rupee s1;
    s1.setdata(doller*100);
    return s1;
} 
}; 
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}