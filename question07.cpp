#include<iostream>
using namespace std;
class Minute
{
int minutes;
public:
void setdata(int input)
{
minutes=input;
}
void display()
{
cout<<"minutes: "<<minutes<<endl;
}
};

class Time
{
int hour;
int minute;

public:
Time(int x,int y)
{
    
    hour=x;
    minute=y;
    
}
operator Minute()
{
   int x=(hour*60+minute);
   Minute m1;
   m1.setdata(x); 
   return m1;
}
void display()
{
    cout<<hour<<":"<<minute<<endl;
}
};

int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1; // Fetch minute from time
t1.display();
m1.display();
return 0;
}