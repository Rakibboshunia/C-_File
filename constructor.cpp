#include <iostream>
using namespace std;
class student
{
    public:
        int id;
        double cgpa;

    student(int x, double y)
    {
        id=x;
        cgpa=y;
    }

    student()
    {
        cout<< "Defoult Constructor" <<endl;
    }

    void display()
    {
        cout<< id << " " << cgpa <<endl;
    }

};

int main()
{
    student defoult;

    student rakib(101, 3.75);
    rakib.display();

    student muhit(101, 3.88);
    muhit.display();

}