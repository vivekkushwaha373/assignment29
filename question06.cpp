#include<iostream>
using namespace std;
class Time
{
int Tduration;
public:
Time(int x)
{
    Tduration=x;
}
void display()
{
    cout<<Tduration;
}

};
int main()
{
int duration;
cout<<"Enter time duration in minutes";
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}