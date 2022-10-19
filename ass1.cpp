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
   void showData()
   {
    cout<<endl<<a<<"+"<<b<<"i";
   }
   Complex add(Complex &p)
   {
    Complex s;
    s.a=a+p.a;
    s.b=b+p.b;
    return s;
   }
};
int main()
{
    Complex c1,c2;
    c1.setData(7,5);
    c2.setData(7,6);
    Complex c3=c1.add(c2);
    c3.showData();
    getchar();
    return 0;


}