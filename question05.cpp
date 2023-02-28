#include<iostream>
using namespace std;
class Invent1
{
int a,b;
public:
Invent1(int x,int y )
{
a=x;
b=y;    
}
int rinta()
{
    return a;
}
int rintb()
{
    return b;
}
operator float()
{
    return a+b;
}

};

class Invent2
{
int a,b;
public:
Invent2(){}
Invent2(Invent1 s1)
{
a=s1.rinta();
b=s1.rintb();
}

};
int main()
{
Invent1 s1=Invent1(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}