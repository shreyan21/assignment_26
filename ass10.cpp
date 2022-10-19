#include<iostream>
using namespace std;
class StaticCount
{
   static int a;
   public:
  static void increment()
   {
    a++;
   }
   static int get()
   {
    return a;
   }
};
int StaticCount::a;
int main()
{
    StaticCount::increment();
    StaticCount::increment();
    StaticCount::increment();
    cout<<StaticCount::get()<<endl;
    getchar();
    return 0;
}