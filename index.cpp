#include<iostream>
using namespace std;

class mobileUser
{
    public:
        virtual void sendMessage() = 0;
};

class Rahim : public mobileUser
{
    public:
        void sendMessage()
        {
            cout<<"Hi, This is Rahim"<<endl;
        }
};

class Rakib : public mobileUser
{
    public:
        void sendMessage()
        {
            cout<<"Hi, This is Rakib"<<endl;
        }
};

int main()
{
    mobileUser *m;

    Rahim r1;
    Rahim s1;

    m = &r1;
    m -> sendMessage();

    m = &s1;
    m -> sendMessage();

}