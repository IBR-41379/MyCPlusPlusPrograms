#include<iostream>
#include<string>
using namespace std;
class student
{
    protected:
    string name;
    int roll,age,marks[5];
    public:
    student()
    {
        cout<<"Enter name";
        getline(cin,name);
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter age:";
        cin>>age;
    }
};
class test:protected student
{
    public:
    // test():student()
    // {}
    test(int a,int b,int c,int d,int e)
    {
        marks[0]=a;
        marks[1]=b;
        marks[2]=c;
        marks[3]=d;
        marks[4]=e;
    }
};
class display:protected test
{
    public:
    display(int b)
    {
        cout<<"Name:"<<name;
        cout<<"\nRoll:"<<roll;
        cout<<"\nAge:"<<age;
        cout<<"\nMarks of "<<b<<"subjects:-";
        cout<<"\nSubject 1:"<<marks[0];
        cout<<"\nSubject 2:"<<marks[1];
        cout<<"\nSubject 3:"<<marks[2];
        cout<<"\nSubject 4:"<<marks[3];
        cout<<"\nSubject 5:"<<marks[4];
    }
    display(int a,int b,int c,int d,int e):test(a,b,c,d,e)
    {}
};
int main(void)
{
    int a,b,c,d,e;
    display obj1;
    cout<<"Enter marks of 5 subjects";
    cin>>a>>b>>c>>d>>e;
    display obj2(a,b,c,d,e);
    display onj3(5);
}