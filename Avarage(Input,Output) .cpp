#include<iostream>
using namespace std;
class student{
  private:
    int roll;
    string name;
    string address;
    string city;
  public:

    void getdata(){
        cout<< "Enter roll: "<<endl;
        cin>>roll;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter address:"<<endl;
        cin>>address;
        cout<<"Enter city name:"<<endl;
        cin>>city;
    }

   void putdata()
   {
       cout<<"Your roll :" <<roll<<endl;
       cout<<"Your name : "<<name<<endl;
       cout<<"Your address:"<<address<<endl;
       cout<<"Your city:"<<city<<endl;
   }
};

class marks:public student{
 private:
    int subject1;
    int subject2;
    int subject3;
    float average;
 public:
   void input()
    {
        getdata();
        cout<<"Enter subject1 mark:"<<endl;
        cin>>subject1;
        cout<<"Enter subject2 mark :"<<endl;
        cin>>subject2;
        cout<<"Enter subject3 mark : "<<endl;
        cin>>subject3;

    }
   void output()
    {
        putdata();
        cout<<"Subject1:"<<subject1<<endl;
        cout<<"Subject2:"<<subject2<<endl;
        cout<<"Subject3:"<<subject3<<endl;
    }
    void averag()
    {
        int k=(subject1+subject2+subject3);
        average=k/3;
        //return average;
        cout<<"Average:"<<average;    }

};
int main()
{
    marks m1;
    m1.input();
    m1.output();
    m1.averag();
}
