#include<iostream>
#include<string>
using namespace std;
class AA
{
    public:
    string name1680,branch1680;
    int roll1680,marks1680;
    void Input()
    {
        cout<<"Enter name:";
        cin>>name1680;
        cout<<"Enter Roll:";
        cin>>roll1680;
        cout<<"Enter Branch:";
        cin>>branch1680;
        cout<<"Enter Marks:";
        cin>>marks1680;
    }
    void display()
    {
        cout<<"\n\n----Displaying Info----\nName:"<<name1680<<"\nRoll:"<<roll1680<<"\nBranch:"<<branch1680<<"\nMarks:"<<marks1680<<endl;
    }
};
int main()
{
    AA a1680;
    a1680.Input();
    a1680.display();
}