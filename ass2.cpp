#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    void setTime(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void normalize()
    {    
        int flag;
        do
        {  
            flag=0;
        if(s>=60)
        { 
            flag=1;
            s-=60;
            m+=1;
        }
        if(m>=60)
        { 
            flag=1;
            m-=60;
            h+=1;
        }
        if(h>=24)
        {  
            flag=1;
            h=0;
            
        }
        }while(flag!=0);
    }
    Time(){}
    // Time(const Time&t)
    // {
    //     this->h=t.h;
    //     this->m=t.m;
    //     this->s=t.s;
    // }
     Time add(Time t3)
    {
        Time t;
        t.h=h+t3.h;
        t.m=m+t3.m;
        t.s=s+t3.s;
        t.normalize();
        return t;
    }
};
int main()
{
    Time t1,t2;
    t1.setTime(0,0,59);
    t2.setTime(0,0,1);
    Time t3;
    t3=t1.add(t2);
    t3.showTime();
    getchar();
    return 0;

}