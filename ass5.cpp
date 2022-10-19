#include<iostream>
#include<stdio.h>
using namespace std;
class Date
{
  int d,m,y;
  public:
  Date(int d,int m,int y)
  {
    this->d=d;
    this->m=m;
    this->y=y;
  }
  void display()
  {
    printf("%02d-%02d-%d\n",this->d,this->m,this->y);

  }
};
int main()
{
    Date d1(23,6,2022);
    d1.display();
    getchar();
    return 0;
}