#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Product
{
int a,b;
public:
int rinta()
{
    return a;
}
int rintb()
{
    return b;
}
void setData(int a,int b)
{
 this->a=a;
 this->b=b;
}
void display()
{
    cout<<a<<" "<<b<<endl;
}
};
class Item
{
int x,y;
public:
Item(){}
Item(Product s1)
{
y=s1.rintb();x=s1.rinta();
// y=s1.rintb();
}
void display()
{
    cout<<"x = "<<x<<" and y = "<<y<<endl;
}
};
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
p1.display();
i1=p1;
i1.display();
return 0;
}