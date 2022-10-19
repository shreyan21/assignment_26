#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    int age;
    char name[30];
    int rollno;
    public:
    Student(int age,char*name,int rollno)
    {  
        this->age=age;
        this->rollno=rollno;
        strcpy(this->name,name);
    }
    void display()
    {
        cout<<"Name is "<<name<<"\nAge is "<<age<<"\nRoll no is "<<rollno<<endl;
    }
};
int main()
{
    Student s1(23,"Utkarsh Singh Rajawat",103);
    s1.display();
    getchar();
    return 0;
}