#include<iostream>
using namespace std;

class person
{
    public:
        string name;
        int age;
    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student : public person
{
    public:
        int id;
    void display2()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Id: "<<id<<endl;
    }
};

int main()
{
    student s1;
    s1.name = "Rakib";
    s1.age = 23;
    s1.id = 374;
    s1.display2();
}