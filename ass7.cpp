#include <iostream>
using namespace std;
class Box
{
    int l, b, h;
    int vol;

    void calculateVol()
    {
        vol=l*b*h;
    }
public:
    Box(int a, int b, int c)
    {
        this->l = a;
        this->b = b;
        this->h = c;
        calculateVol();
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    int getVol()
    {
        return vol;
    }
};
int main()
{  
    cout<<"Enter the length , breadth and height of box : ";
    int a,b,c;
    cin>>a>>b>>c;

    Box b1(a,b,c);
    cout<<"Volume of cuboid is : "<<b1.getVol()<<endl;
    cin.ignore();
    getchar();
    
    return 0;
}