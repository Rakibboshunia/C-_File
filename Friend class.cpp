#include<iostream>
using namespace std;

class rakib
{
    private:
        int id=101;
        string name="Rakib bosunia";

    public:
        friend class rasel;
};

class rasel
{
    public:
        void display(rakib r)
        {
            cout<< r.id <<endl;
            cout<< r.name <<endl;
        }
};


int main()
{
    rakib R1;
    rasel R2;

    R2.display(R1);
}
