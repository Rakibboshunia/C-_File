#include<iostream>
using namespace std;
 
 class person 
 {
    public:
        void display()
        {
            cout<< "I am a person " <<endl;
        }
 };

  class student : public person 
 {
    public:
        void display()
        {
            cout<< "I am a student " <<endl;
        }
 };

  class teacher : public person
 {
    public:
        void display()
        {
            cout<< "I am a teacher " <<endl;
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