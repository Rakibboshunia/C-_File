#include<iostream>
using namespace std;

class student
{
    public:
        string name;
        int id;
        int age;

    void display()
    {
        cout<< "Nathing to add" <<endl;
    }

    void display(int a, int b)
    {
        cout<< name << " " << id <<endl;
    }

    void display(int a, int b, int c)
    {
        cout<< name << " " << id << " " << age <<endl;
    }
};

int main()
{
    student s1;
    s1.display();
    s1.display(23,45678);
    s1.display(45,67689,23);

}