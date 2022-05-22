#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
    int id;
    string name;
public:
    void setInfo(int,string);
    void display(void);
};
void Student :: setInfo(int i,string n){
    id = i;
    name = n;
}
void Student :: display(void){
    cout<<" Your name is : "<<name<<" and Your id is :"<<id<<endl;
}

class GroupA : virtual public Student{
protected:
    string Tname;
    int Tage;
public:
    void setTeacher(string t1,int t2){
        Tname = t1;
        Tage = t2;
    }
    void displayTeacher(void){
        cout<<"Your teacher name is : "<<Tname<<" Your teacher age is : "<<Tage<<endl;
    }
};

class GroupB : virtual public Student{

};


class MainCls : public GroupA,public GroupB{


};

int main(){
    MainCls ob;
    ob.setInfo(1245,"asad");
    ob.display();


return 0;
}
