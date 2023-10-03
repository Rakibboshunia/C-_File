#include<iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;

    void display()
    {
        cout<< "Name : "<<name<<endl;
        cout<< "Age : "<<age<<endl;
    }
};

//inheritence part
class student : public person   
{
    public:
    int id;

    void display2()
    {
        cout<<"Id : "<<id<<endl;
        cout<< "Name : "<<name<<endl;
        cout<< "Age : "<<age<<endl;
    }
};

int main()
{
    student s1;

    s1.id = 621166;
    s1.name ="Al-Rakib Boshunia";
    s1.age = 23;
    s1.display2();

    return 0;
}