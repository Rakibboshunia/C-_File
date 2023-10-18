#include<iostream>
using namespace std ;

class student
{
    char name;
    int id;
    public:
        void getdata(void);
        void putdata(void);
};

void student :: getdata(void)
{
    cout<< " Enter Name: "<<endl;
    cin>> name;
    cout<< "Enter id: "<<endl;
    cin>> id;
}
void student :: putdata(void)
{
    cout<< "name: " <<name;
    cout<< "id: " <<id;
}

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
}