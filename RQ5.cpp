#include <iostream>
using namespace std;


class constr
{
    public:
    int a1680;
    int b1680;
    
    private:
    static int count1680;

    public:
    constr()
    {
        cout<<"I am default constructor :)"<<endl;
        count1680 ++;
    }
    constr(int c,int d)
    {
        cout<<"I am parameterized constructor with parameters "<<c<<" and "<<d<<endl;
        count1680++;
    }
    constr(constr &obj1)
    {
        cout<<"I am copy constructor which copy data members data from object a to b"<<endl;
        a1680 = obj1.a1680;
        b1680 = obj1.b1680;
        count1680++;
    }
    static int set()
    {
        return count1680;
    }
    ~constr()
    {
        cout<<"Destructor invoked"<<endl;
    }

};
int constr::count1680=0;
int main(void)
{
    int l1680;
    constr obj1;
    constr obj2(2,5);
    constr obj3(obj2);
    l1680 = obj3.set();
    cout<<"The number of objects is :"<<l1680<<endl;
}