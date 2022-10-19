#include <iostream>
using namespace std;
class Cube
{
    int a;

public:
    Cube(int a)
    {
        this->a = a;
    }
    int getVolume()
    {
        return a*a*a;
    }
};
int main()
{
    Cube c1(4);
    cout<<"Volume is "<<c1.getVolume()<<endl;
    getchar();
    return 0;

}