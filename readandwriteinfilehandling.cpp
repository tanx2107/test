//Read and write in file handling c++//
#include<iostream>
#include<fstream>
using namespace std;
class student
{

    int roll_no;
    char name[30];
    float marks;
    public:
    void get()
    {
        cout<<"Enter the roll no, name, marks";
                cin>>roll_no>>name>>marks;
    }
    void show()
    {
        cout<<roll_no<<" "<<name<<" "<<marks;

    }
};
int main()
{
     fstream ob("student.txt",ios::out|ios::binary);
     student s;
     s.get();
     ob.write((char*)&s,sizeof(s));
     ob.close();
     fstream ob1("student.txt",ios::in|ios::binary);
     student s1;
     ob1.read((char*)&s1,sizeof(s1));
     s1.show();
}
