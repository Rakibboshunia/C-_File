#include<iostream>
using namespace std;
class myclass{
 private:
    int a,b,c;
 public:
    int function(int m);
    int function(int x, int y);
    int function(int p, int q, int r);

};
int myclass::function(int m)
{
    int a=m;
    int result=1,i;
    for(i=a;i>=1;i--)
    {
        result = result*i;
    }
    cout<<"Factorial = "<<result<<endl;
    cout<<"\n\n";
    return result;
}
int myclass::function(int x, int y)
{
    a=x;
    b=y;
    int factorial_1=1;
    int factorial_2=1;
    int max,min,gcd,lcm,r,i,j;
    for(i=a;i>=1;i--)
    {
        factorial_1 = factorial_1*i;
    }
    for(j=b;j>=1;j--)
    {
        factorial_2 = factorial_2*j;
    }
    cout<<"Factorial of "<<a<<" is : "<<factorial_1<<endl;
    cout<<"Factorial of "<<b<<" is : "<<factorial_2<<endl;
    if(factorial_1 > factorial_2)
    {
        max = factorial_1;
        min = factorial_2;
    }
    else
    {
        max = factorial_2;
        min = factorial_1;
    }
    DIU:
        r = max % min;
        if(r == 0)
        {
            gcd = min;
        }
        else
        {
            max = min;
            min = r;
            goto DIU;
        }
lcm = (factorial_1*factorial_2)/gcd;
cout<<"GCD is : "<<gcd<<endl;
cout<<"LCM is : " <<lcm<<endl;
cout<<"\n\n";

}
int myclass::function(int p, int q, int r)
{
    a=p;
    b=q;
    c=r;
    int factorial_1=1;
    int factorial_2=1;
    int factorial_3 =1;
    int i,j,k,max,min;
    for(i=a;i>=1;i--)
    {
        factorial_1 = factorial_1*i;
    }
    for(j=b;j>=1;j--)
    {
        factorial_2 = factorial_2*j;
    }
    for(k=c;k>=1;k--)
    {
        factorial_3 = factorial_3*k;
    }
    cout<<"Factorial of "<<a<<" is : "<<factorial_1<<endl;
    cout<<"Factorial of "<<b<<" is : "<<factorial_2<<endl;
    cout<<"Factorial of "<<c<<" is : "<<factorial_3<<endl;
    if(factorial_1 > factorial_2 )
    {
        if(factorial_1 > factorial_3)
        {
            max = factorial_1;
        }
        else
        {
            max = factorial_3;
        }
    }
    else
    {
        if(factorial_2 > factorial_3)
        {
            max = factorial_2;
        }
        else
        {
            max = factorial_3;
        }
    }
    if(factorial_1 < factorial_2)
    {
        if(factorial_1 < factorial_3)
        {
            min = factorial_1;

        }
        else
        {
            min = factorial_3;

        }

    }
    else
    {
        if(factorial_2 < factorial_3)
        {
            min = factorial_2;
        }
        else
        {
            min = factorial_3;
        }

    }
    cout<<"Maximum number = "<<max<<endl;
    cout<<"Minimum number = "<<min<<endl;

}

int main()
{
    myclass h;
    h.function(5);
    h.function(5,6);
    h.function(7,8,3);
}
