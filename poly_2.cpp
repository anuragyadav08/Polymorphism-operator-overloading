//Binary operator overloading

#include <iostream>

using namespace std;

class A {
    protected:
        int value1,value2;
    public:
        A(){value1=value2=0;}
        A(int x,int y)
        {
            value1=x;
            value2=y;
        }
        void pdata()
        {
            cout<<"Number1 is : "<<value1<<endl;
            cout<<"Number2 is : "<<value2<<endl;
        }
        A  operator +(A &obj)
        {
            A temp;
            temp.value1=value1+obj.value1;
            temp.value2=value2+obj.value2;
            return temp;
        }
};
int main()
{
  A obj1(8,12);
  A obj2(87,79);
  A res=obj1+obj2;
  res.pdata();

    return 0;
}
