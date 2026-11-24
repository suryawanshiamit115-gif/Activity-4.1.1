#include<iostream>
using namespace std;

class calculator
{
 public: 
 int Addition(int s,int d)
{
 return s+d;
}
 int Addition(int s,int d,int f)
{
return s+d+f;
}
};
  int main()
{
 calculator c;
cout<<"The Addition 1 is"<<c.Addition(650,350)<<endl;
cout<<"The Addition 2 is"<<c.Addition(800,350)<<endl;
return 0;
} 
