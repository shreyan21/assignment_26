#include<iostream>
using namespace std;
class Counter
{
    static int c;
    public:
    static int count()
    {
        return c;
    }
    Counter()
    {
        c++;
    }
    ~Counter()
    {
        c--;
    }
};
int Counter::c=0;
int main()
{
    Counter c1,c2;
    cout<<"Number of objects are "<<c1.count()<<endl;
    getchar();
    return 0;
}