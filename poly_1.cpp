//Unary operator overloading

#include <iostream>

using namespace std;

class A {
    protected:
        int value;
    public:
        A(){value=0;}
        A(int x)
        {
            value=x;
        }
        void pdata()
        {
            cout<<"Number is : "<<value<<endl;
        }
        void operator ++()
        {
            value=value+10;
        }
};
int main()
{
  A obj(200);
  ++obj;
  obj.pdata();

    return 0;
}
