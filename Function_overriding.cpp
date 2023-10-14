#include<iostream>
using namespace std;

class person
{
    public:
    void display()
    {
        cout<< "I am a Person" <<endl;
    }
};

class student
{
    public:
    void display()
    {
        cout<< "I am a Student"<<endl;
    }
};

class teacher
{
    public:
    void display()
    {
        cout<< "I am a Teacher"<<endl;
    }
};

int main()
{
    person p;
    student s;
    teacher t;

    p.display();
    s.display();
    t.display();
}