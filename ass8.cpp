#include<iostream>
using namespace std;
class Bank
{
  int principal,roi,time;
  float SI;
  public:
  Bank(int a,int b,int c)
  {
    principal=a;
    roi=b;
    time=c;
    calculateSI();
  }
  void calculateSI()
  {
    SI=(principal*roi*time)/100.0;

  }
  int getPrincipal()
  {
    return principal;
  }
  int getRoi()
  {
    return roi;
  }
  int getTime()
  {
    return time;
  }
  void displaySI()
  {
    cout<<"Simple interest is : "<<SI<<endl;
  }
};
int main()
{
    Bank b1(1000,5,1);
    cout<<"Details : \n";
    cout<<"Principal : "<<b1.getPrincipal()<<endl;
    cout<<"Rate of interest : "<<b1.getRoi()<<endl;
    cout<<"Time : "<<b1.getTime()<<endl;
    
    b1.displaySI();
    getchar();
    return 0;
}