#include<iostream>
using namespace std;
 
 class person 
 {
    public:
        string name;
        int id;
        void display()
        {
            cout<< name << " " << id <<endl;
        }
 };

  class student
 {
    public:
        string name;
        int id;
        void display()
        {
           cout<< name << " " << id <<endl;
        }
 };

  class teacher
 {
    public:
        string name;
        int id;
        void display()
        {
            cout<< name << " " << id <<endl;
        }
 };

 int main()
 {
    person p;
    p.name= "Rakib";
    p.id= 616266;
    p.display();

    student s;
    s.name= "Muhit";
    s.id= 616267;
    s.display();

    teacher t;
    t.name= "Ashik";
    t.id= 616268;
    t.display();
 }